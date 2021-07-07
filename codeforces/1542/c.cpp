#include<bits/stdc++.h>
using namespace std;


#define ll long long


//TODO: optimize

// bool isPrime(ll n){
//     for (ll i = 2; i*i<=n;i++){
//         if(n % i == 0){
//             return false;
//         }  
//     }
//     return true;
// }

// ll nextPrime(ll n){
//     n++;
//     while(!isPrime(n)) n++;
//     return n;
// }

const ll MOD = 1000000007;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll n;
        cin >> n;

        ll ans = 0, rem = n;
        ll sub = (n + 1) / 2ll;
        ans += (sub) * 2ll;
        rem -= sub;

        ll lp = 2, d = 2;
        while(rem != 0){
            ll np = lp + 1;
            ll g = __gcd(np, d);
            d *= (np / g);
            ll r = n / d;
            ans += ((rem - r) * np)%MOD;
            ans %= MOD;
            rem = r;
            lp = np;
        }

        cout << ans << "\n";
    }
    return 0;
}
