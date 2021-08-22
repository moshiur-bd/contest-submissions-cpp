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
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++){
            if(s[i] == '?'){
                if(i > 0 && s[i-1] != '?'){
                    s[i] = (s[i-1] == 'B') ? 'R' : 'B';
                } else {
                    int dist = 1;
                    char selCol = 'B';
                    while(i + dist < n && s[i+dist] == '?'){
                        dist++;
                    }
                    if(i + dist < n){
                        if(dist %2 == 0){
                            selCol = s[i+dist];
                        } else{
                            selCol = (s[i+dist] == 'B') ? 'R' : 'B';
                        }
                    }
                    s[i] = selCol;
                }
            }
        }
        cout << s << "\n";
    }
    return 0;
}
