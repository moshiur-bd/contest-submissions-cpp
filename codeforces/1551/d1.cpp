#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n, m, k;
        cin >> n >> m >> k;
        int tot = m * n / 2;
        if(k > tot){
            puts("NO");
            continue;
        }
        bool yes = true;
        if((n + m)  % 2 == 0){
            yes = (k % 2 == 0);
        } else {
            int h = 0, v = 0;
            if(n % 2 == 1){
                h = m / 2;
                if(k < h) {
                    yes = false;
                } else {
                    yes = ((k - h) % 2 == 0);
                }
            } else {
                v = n / 2;
                if ((tot-k) < v)
                {
                    yes = false;
                }
                else
                {
                    yes = ((h - k) % 2 == 0);
                }
            }
        }
        puts(yes ? "YES" : "NO");
        
    }
    return 0;
}
