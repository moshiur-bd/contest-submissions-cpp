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


int a[112345];

vector<ll> parity[2];

ll numSwaps(int n, int pId){
    ll swaps = 0;
    ll start = 0;
    for(auto t:parity[pId]){
        swaps += abs(t - start);
        start += 2;
    }
    return swaps;
}

void calc(int n){
    if (abs((int)parity[0].size() - (int)parity[1].size()) > 1)
    {
        puts("-1");
        return;
    }


    if ((int)parity[0].size() > (int)parity[1].size())
    {
        cout << numSwaps(n, 0) << "\n";
        return;
    }
    if ((int)parity[0].size() < (int)parity[1].size())
    {
        cout << numSwaps(n, 1) << "\n";
        return;
    }
    cout << min(numSwaps(n, 0), numSwaps(n, 1)) << "\n";
    return;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        parity[0].clear();
        parity[1].clear();
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", a+i);
            if(a[i]&1) parity[1].push_back(i);
            else parity[0].push_back(i);
        }
        calc(n);
    }
    return 0;
}
