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

void print(int l, int r)
{
    for(int i = l; i <= r; i++){
        cout << i + 1 << " ";
    }
}
bool solve(vector<int> &a, int n) {
    if(a.back() == 0){
        print(0, n);
        return true;
    }
    if(a[0] == 1){
        print(n, n);
        print(0, n-1);
        return true;
    }
    for(int i = 0; i + 1 < n; i++){
        if(a[i] == 0 && a[i+1] == 1){
            print(0, i);
            print(n, n);
            print(i+1, n-1);
            return true;
        }
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        if(!solve(a, n)){
            cout << "-1";
        }
        cout << "\n";
    }
    return 0;
}
