#include<bits/stdc++.h>
using namespace std;
#define ll long long

//error
#define error(args...)                         \
    {                                          \
        vector<string> _v = split(#args, ','); \
        err(_v.begin(), args);                 \
        cout << endl;                          \
    }

vector<string> split(const string &s, char c)
{
    vector<string> v;
    stringstream ss(s);
    string x;
    while (getline(ss, x, c))
        v.emplace_back(x);
    return move(v);
}

void err(vector<string>::iterator it) {}
template <typename T, typename... Args>
void err(vector<string>::iterator it, T a, Args... args)
{
    cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << "  ";
    err(++it, args...);
}
//end

const ll MOD = 1000000007;

ll powerMod(ll a, ll p) {
    if(p == 0) return 1;
    if(p == 1) return a % MOD;
    ll res = powerMod(a, p/2);
    res = (res * res) % MOD;
    if(p % 2 == 1) res = (res * a) % MOD;
    return res;
}

ll onceEq = -1;
ll calcOnce(ll n){
    if(onceEq != -1) return onceEq;

    ll eq = 1ll;
    ll npr, ist;
    if (n & 1)
    {
        npr = n;
        ist = n - 1;
    }
    else
    {
        ist = n - 2;
        npr = (n * (n - 1)) % MOD;
    }

    for (ll i = ist; i > 1; i -= 2)
    {
        //error(i, npr, n);
        eq = (eq + npr) % MOD;
        npr = (npr * (i * (i - 1)) % MOD) % MOD;
    }
    return onceEq = eq;
}

int main(){
    freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll n , k;
        cin >> n >> k;
        ll ansEq = 1;
        ll big  = 0;
        for(;k > 0;k--){
            ll b = 1ll;
            if(k > 1) b = (n * powerMod(2, k-1))%MOD;
            big = (big + b)%MOD;

            ansEq = (ansEq * calcOnce(n)) % MOD;
            error(k, n, ansEq,  big);
        }

        ll ans = (big + ansEq) % MOD;
        cout << ans << "\n";
        onceEq = -1;
        
    }
    return 0;
}
