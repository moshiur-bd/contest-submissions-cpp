#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n;
string a, b;

inline int countMove(int i) {
    if(b[i] == '0') return 0;
    //left
    if(i > 0 && a[i-1] == '1') {
        a[i-1] = '2';
        return 1;
    }
    //straight
    if (a[i] == '0')
    {
        a[i] = '2';
        return 1;
    }
    //right
    if ((i + 1) < n && a[i + 1] == '1')
    {
        a[i+1] = '2';
        return 1;
    }

    return 0;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        cin >> n >> a >> b;
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += countMove(i);
        }
        cout << ans << "\n";
    }
    return 0;
}
