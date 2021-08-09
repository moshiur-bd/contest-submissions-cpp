#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool vulnerable(vector<set<int>> &g, int u){
    if(g[u].empty()) return false;
    int v = *(--g[u].end());
    // cout << "vul " << u << "-> " << v << endl;
    if (v > u) return true;
    return false;
}



int main(){
    //freopen("in.txt", "r", stdin);
    int n, m;
    cin >> n >> m;
    int process = n;
    vector<bool> ok(n + 1, true);
    vector<set<int>> g(n + 1);
    int u, v;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        g[u].insert(v);
        g[v].insert(u);

        if(ok[u] && vulnerable(g, u)){
            ok[u] = false;
            process--;
        }

        if (ok[v] && vulnerable(g, v))
        {
            ok[v] = false;
            process--;
        }

    }

    int q;
    cin >> q;
    while(q--){
        int tOp;
        cin >> tOp;
        if(tOp == 1){
            cin>>u>>v;
            g[u].insert(v);
            g[v].insert(u);

            if (ok[u] && vulnerable(g, u))
            {
                ok[u] = false;
                process--;
            }

            if (ok[v] && vulnerable(g, v))
            {
                ok[v] = false;
                process--;
            }

        }else if(tOp == 2){
            cin >> u >> v;
            g[u].erase(v);
            g[v].erase(u);

            if (!ok[u] && !vulnerable(g, u))
            {
                ok[u] = true;
                process++;
            }

            if (!ok[v] && !vulnerable(g, v))
            {
                ok[v] = true;
                process++;
            }

        }else if(tOp == 3){
            cout << process << "\n";
        }

    }
    return 0;
}
