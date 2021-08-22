#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll n;
        cin >> n;
        ll ans = (1ll << 60) - 1ll, x;
        for(int i = 0; i < n; i++){
            cin >> x;
            ans &= x;
        }
        cout << ans << "\n";
    }
    return 0;
}
