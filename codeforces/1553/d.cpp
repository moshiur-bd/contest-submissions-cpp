#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        string s, t;
        cin >> s >> t;
        int p = (int)s.size() - 1, q = (int)t.size() - 1;
        while(q >= 0 && p >= 0){
            while(p >= 0 && s[p] != t[q]) p-=2;
            if(p < 0 || s[p] != t[q]){
                break;
            }
            //printf("dbg: %d %d\n", p, q);
            p--;
            q--;
        }
        puts(q < 0 ? "YES" : "NO");
    }
    return 0;
}
