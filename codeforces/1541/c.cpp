#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[112345];
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll n;

        cin >> n;
        for (ll i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);

        ll sum = 0, ans = 0, minus;
        for (ll i = 2; i < n; i++){
            sum += a[i - 2];
            minus = i - 1ll;
            minus *= a[i];

            ans += (sum - minus);

        }
        cout << ans << "\n";
    }
    return 0;
}
