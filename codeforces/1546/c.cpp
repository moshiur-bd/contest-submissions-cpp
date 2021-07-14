#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

int ep[MAXN], op[MAXN],  eq[MAXN], oq[MAXN];

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int  n,x;
        cin >> n;
        vector<int> a;
        memset(ep, 0, sizeof ep);
        memset(op, 0, sizeof op);
        memset(eq, 0, sizeof eq);
        memset(oq, 0, sizeof oq);
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
            if((i % 2) == 0){
                ep[x]++;
            } else {
                op[x]++;
            }
        }
        sort(a.begin(), a.end());


        for(int i = 0; i < n; i++){
            x = a[i];
            if((i % 2) == 0){
                eq[x]++;
            }
            else {
                oq[x]++;
            }
        }

        bool yes = true;
        for (int i = 1; i < MAXN; i++){
            if(ep[i] != eq[i] || op[i] != oq[i]){
                yes = false;
                break;
            }
        }

        a.clear();
        puts(yes? "YES":"NO");

    }
    return 0;
}
