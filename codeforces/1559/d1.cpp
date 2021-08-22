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


struct UnionFind{
    vector<int> p;
    int count;
    UnionFind(int n){
        p.resize(n+1);
        for(int i = 1; i <= n; i++){
            p[i] = i;
        }
        count = n;
    }
    int Find(int x){
        if(p[x] == x) return x;
        return p[x] = Find(p[x]);
    }
    int Sets(){
        return count;
    }
    void Union(int a, int b){
        int pa = Find(a);
        int pb = Find(b);
        if(pa != pb){
            p[pb] = pa;
            count--;
        }
    }
};

int main(){
    //freopen("in.txt", "r", stdin);
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    UnionFind a(n), b(n);
    int u, v;
    while(m1--){
        cin >> u >> v;
        a.Union(u, v);
    }
    while (m2--){
        cin >> u >> v;
        b.Union(u, v);
    }
    vector<pair<int, int>> ans;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(a.Find(i) != a.Find(j) && b.Find(i) != b.Find(j)){
                a.Union(i, j);
                b.Union(i, j);
                ans.push_back(make_pair(i, j));
            }
        }
    }
    cout << (int)ans.size() << endl;
    for(auto &item:ans){
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}
