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

int main(){
    freopen("inp.txt", "r", stdin);
    freopen("in.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    cout << n << " " << k << endl;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n; i++){
        cout << (a[0] | a[i]) << endl;
        cout << (a[0] & a[i]) << endl;
    }
    cout << (a[1] | a[2]) << endl;
    cout << (a[1] & a[2]) << endl;
    return 0;
}
