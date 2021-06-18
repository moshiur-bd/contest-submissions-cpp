#include<bits/stdc++.h>
using namespace std;


vector<string> a;

int memo[255][255];

bool reach(int i,int j){
    if(i > j) {
        swap(i, j);
    }
    int &ans = memo[i][j];
    if(ans != -1) return ans == 1;

    string &x = a[i], &y = a[j];
    int cntx[10]={0}, cnty[10] = {0};
    for(int i = 0; i < x.size(); i++){
        cntx[x[i] - '0']++;
        cnty[y[i] - '0']++;
    }
    int match = 0;
    for(int i = 0; i < 10; i++){
        match += min(cntx[i], cnty[i]);
    }
    ans = (match == 17)?1:0;
    return ans == 1;
}

int dist(int s, int e){
    vector<bool> vis(a.size(), false);
    vector<int> lev(a.size(), 0);
    queue<int> q;
    q.push(s);
    vis[s] = true;
    int ans = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(u == e){
            return lev[u];
        }
        for (int v = 0; v < a.size(); v++)
        {
            if(u != v && !vis[v] && reach(u, v)){
                q.push(v);
                lev[v] = lev[u] + 1;
                vis[v] = true;
            }
            
        }
    }
    return -1;
} 
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        memset(memo, -1, sizeof memo);
        a.clear();
        int n,s,e;
        cin >> n>>s>>e;
        string x;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        cout<< dist(s-1, e-1) << "\n";
    }
    return 0;
}
