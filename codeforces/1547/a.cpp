#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

bool isIn1D(int f, int a, int b){
    if(a < f && f < b) return true;
    if(b < f && f < a) return true;
    return false;
}

bool isIn(pii f, pii a, pii b){
    if(f.first == a.first && f.first == b.first){
        if(isIn1D(f.second, a.second, b.second)){
            return true;
        }
    }

    if (f.second == a.second && f.second == b.second){
        if (isIn1D(f.first, a.first, b.first)){
            return true;
        }
    }

    return false;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        pii a, b, f;
        cin >> a.first >> a.second;
        cin >> b.first >> b.second;
        cin >> f.first >> f.second;

        int ans = abs(a.first - b.first) + abs(a.second - b.second);
        if(isIn(f, a, b)){
            ans += 2;
        }
        cout << ans <<"\n";
    }
    return 0;
}
