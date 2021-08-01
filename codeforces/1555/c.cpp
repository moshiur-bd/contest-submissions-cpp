#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (1ll << 50)

ll m;

inline ll rangeSum(vector<ll> &a, ll l, ll r) {
    if(l > r) return 0;
    return a[r] - a[l - 1];
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        cin >> m;
        vector<vector<ll>> a(2, vector<ll>(m + 2, 0));
        for(ll i = 0; i < 2; i++){
            for(ll j = 1; j <= m; j++){
                cin >> a[i][j];
                a[i][j] += a[i][j - 1];
            }
        }
        ll ans = 1ll << 50;
        for(int i = 1; i <= m; i++){
            ans = min(ans, max(rangeSum(a[0],i + 1 , m), rangeSum(a[1], 1, i - 1)));
        }
        a.clear();
        cout << ans << "\n";
    }
    return 0;
}
