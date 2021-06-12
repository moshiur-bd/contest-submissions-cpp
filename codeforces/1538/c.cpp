#include<bits/stdc++.h>
using namespace std;

int a[212345];

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n, l, r;
        scanf("%d %d %d", &n ,&l, &r);
        for(int i = 0; i < n; i++){
            scanf("%d", a + i);
        }
        sort(a, a+n);
        long long ans = 0;
        for(int i = 0; i + 1 < n; i++){
            int lp = lower_bound(a+i+1, a+n, l-a[i]) - a;
            int rp = upper_bound(a+i+1, a+n, r-a[i]) - a;
            ans += max(0, rp - lp);
        }
        printf("%lld\n", ans);
    }
    return 0;
}
