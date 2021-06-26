#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[212345];

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin>> n;
        unordered_map<ll, ll> idx;
        for(int i = 1; i <=n ; i++){
            cin>>a[i];
            idx[a[i]] = i;
        }
        sort(a+1, a+1+n);
        ll maxNum = n + n;
        ll ans  = 0;
        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <=n; j++){
                ll mul = a[i] * a[j];
                if(mul > maxNum) {
                    break;
                }
                if (mul == idx[a[i]] + idx[a[j]]) {
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}
