#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[1123456];
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin >> n;
        ll ans = 0;
        cin >> a[0];
        for(int i = 1; i < n; i++){
            cin >> a[i];
            ans = max(ans, a[i] * a[i-1]);
        }
        cout << ans << "\n";
    }
    return 0;
}
