#include<bits/stdc++.h>
using namespace std;
vector<int> a, b;
int m[512345]={0};
int n;

const int LR = -200012, RR=200012;

inline int id(int x){
    return x + 212345;
}

int invoke = 0;

bool possible(int r){
    invoke++;
    if(invoke > 1000000){
        cout<< invoke << endl;
    }
    if(r == n){
        for(int i=0;i<n;i++){
            bool found = false;
            int occ = 0;
            for(int j = 0; j < n; j++) {
                occ = m[id(a[i] + b[j])];
                if(occ > 0){
                    found = true;
                    break;
                }
            }
            if(!found) return false;
        }
        return true;
    }

    for(int x = LR; x <= RR; x++){
        b.push_back(x);
        m[id(x)]++;
        if(possible(r + 1)){
            return true;
        }
        m[id(x)]--;
        b.pop_back();
    }
    return false;
}


int main(){
    freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        scanf("%d", &n);
        a.clear();
        b.clear();
        int x;
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            a.push_back(x);
        }
        puts(possible(0) ? "YES" : "NO");
    }
    return 0;
}
