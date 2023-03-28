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


int a[101], b[101];

int main() {
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) { 
            scanf("%d", a+i);
        }

        for(int i = 0; i < n; i++) { 
            scanf("%d", b+i);
        }

        bool ans = true;
        for(int i = 0; i + 1 < n; i++){
            if(a[i] > a[n-1]){
                swap(a[i], b[i]);
            } else if(b[i] > b[n-1]){
                swap(a[i], b[i]);
            }

            if(a[i] > a[n-1] || b[i] > b[n-1]){
                ans = false;
            }
            // error(tc, i, a[i], b[i]);
        }

        puts(ans ? "Yes" : "No");
    }
    return 0;
}
