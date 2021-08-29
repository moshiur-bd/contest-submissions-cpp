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
bool composite[100001] = {0};
void sieve(){
    composite[0] = composite[1] = true;
    for(ll i = 2; i <= 100000; i++)
        if(!composite[i])
            for(ll j = i*i; j <= 100000; j+=i)
                composite[j] = true;
}

bool not2357(char d){
    return d != '2' && d != '3' && d != '5' && d != '7';
}

string tryGuess(string s){
    for (int i = 0; i < s.size(); i++)
    {
        if (not2357(s[i]))
        {
            return string(1, s[i]);
        }
    }

    unordered_set<char> visited;
    for (int i = 0; i < s.size(); i++)
    {
        if(visited.find(s[i]) != visited.end()){
            return string(2, s[i]);
        }
        visited.insert(s[i]);
    }
    return "";
}

string completeSearch(string &s, int p = 0, int num = 0){
    if(num > 0  && composite[num]){
        stringstream ss;
        ss << num;
        return ss.str();
    }
    if(p == (int)s.size()){
        return "";
    }
    string r1 = completeSearch(s, p + 1, num * 10 + (s[p] - '0'));
    string r2 = completeSearch(s, p + 1, num);
    if(r1 == "") return r2;
    if(r2 == "") return r1;
    if(r1.size() < r2.size()) return r1;
    return r2;
}

int main(){
    //freopen("in.txt", "r", stdin);
    sieve();

    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        string s;
        cin >> n >> s;
        string ans = tryGuess(s);
        if(ans == ""){
            ans = completeSearch(s);
        }
        cout << ans.size() << "\n";
        cout << ans << "\n";
    }
    return 0;
}
