#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[312345];

ll calc(ll n, ll k){
    ll ans = - (1ll << 60);
    for (ll i = n; i >= 1; i--)
    {
        for (ll j = i - 1; j >= 1; j--)
        {
            ll Fij = i * j - (a[i] | a[j]) * k;
            ans = max(ans, Fij);
            if (ans > (i * j)){
                break;
            }
        }
        if (ans > (i * i)){
            return ans;
        }
    }
    return ans;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll n, k;
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        cout << calc(n, k) << "\n";
    }
    return 0;
}
