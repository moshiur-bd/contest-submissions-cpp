#include<bits/stdc++.h>
using namespace std;
#define ll long long

//error() for debugging purpose
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

// -------------- solution starts from here ---------------//

ll brute(ll l, ll r){
    ll ans = 0;
    for(ll b = l; b <= r; b++)
        for(ll a = b; a <= r; a++)
            ans = max(ans, a % b);
    return ans;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll l, r;
        cin >> l >> r;

        ll ans = r - max(((r + 2) / 2ll), l);
        if ((r - l) < 80 || r < 80){
            ans = brute(l, r);
        }
        cout << ans << "\n";
    }
    return 0;
}
