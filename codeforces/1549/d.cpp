#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gcd __gcd

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll n,x;
        cin >> n;
        vector<ll>a;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }

        ll ans = 1, lastIdx = 0, g = 0;

        for(ll i = 1; i < n; i++){
            g = gcd(g, abs(a[i] - a[lastIdx]));
            if(g == 1){
                ans = max(ans, i - lastIdx);
                g = 0;
                ll j = i -1;
                for(; j>lastIdx; j--){
                   ll lg = gcd(g, abs(a[i]-a[j]));
                    if(lg == 1){
                        break;
                    }
                    g = lg;
                }
                lastIdx = j + 1;
            }
        }

        if(g != 1){
            ans = max(ans, n - lastIdx);
        }

        cout << ans << "\n";       
    }
    return 0;
}
