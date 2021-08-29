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

void print(int x, int y, int len) {
    //swap(x, y);
    printf("%d %d %d %d\n",x + 1, x + len + 1, y + 1, y + len + 1);
    //cout << "bal ";
}

void solve(string s, int n){
    int len = (n-1)/2;
    for(int i = len + 1; i < n; i++){
        if(s[i] == '0'){
            //cout << i << " ";

            int x = i - len - 1;
            int y = i - len;
            if(s[x] == '1') swap(x, y);
            print(x, y, len);
            return;
        }
    }
    print(len+1, len, len);
    return;
}


int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        string s;
        cin >> n >> s;
        solve(s, n);
    }
    return 0;
}
