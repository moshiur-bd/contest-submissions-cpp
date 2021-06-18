#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll operations(ll x){
    ll msbIdx = 62;
    while(msbIdx --){
        if(x & (1ll << msbIdx)){
            break;
        }
    }
    return msbIdx + __builtin_popcountll(x) - 1;
}

ll sum[112345];
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n , q;
        scanf("%d%d", &n, &q);
        ll x;
        sum[0] = 0ll;
        for(int i = 1; i <= n; i++){
            scanf("%lld", &x);
            sum[i] = sum[i-1] + operations(x);
        }
        while(q--){
            int l, r;
            scanf("%d%d", &l, &r);
            printf("%lld\n", sum[r] - sum[l-1]);
        }
    }
    return 0;
}
