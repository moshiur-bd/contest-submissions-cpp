#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for (int tc = 1; tc <= TC; tc++)
    {
        ll n, x, t;
        cin >> n >> x >> t;
        ll d = t / x, s = min(d, n-1);
        ll ans = (s * (s + 1ll)) / 2 + max(0ll, n -1 - s) * d;
        cout << ans << "\n";
    }
    return 0;
}
