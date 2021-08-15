#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n, k, x;
        cin >> n >> k;
        vector<int> a;
        unordered_map<int, int> m;
        int pre = INT_MAX; 
        for(int i = 0; i < n; i++){
            cin >> x;
            m[x] = pre;
            pre = x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int ans = 1;
        pre = a[0];
        for(int i = 1; i < n; i++){
            if(pre != m[a[i]]) {
                ans++;
            }
            pre = a[i];
        }
        //cout << "dbg: " << ans << endl;
        puts(ans <= k ? "Yes" : "No");
        m.clear();
    }
    return 0;
}
