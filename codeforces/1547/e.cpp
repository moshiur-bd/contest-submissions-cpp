#include<bits/stdc++.h>
using namespace std;

#define INF 2000111000

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n , k;
        cin>> n >> k;
        vector<int> ans(n + 2, INF), t(n+2, INF);
        vector<int> a(k);
        for(int i = 0; i < k; i++){
            cin >> a[i];
        }
        for(int i = 0; i < k; i++){
            cin >> t[a[i]];
        }
        for(int i = 1; i <=n ; i++){
            ans[i] = min(ans[i], ans[i-1] + 1);
            if(t[i] != INF){
                ans[i] = min(ans[i], t[i]);
            }
        }

        for (int i = n; i >= 1; i--)
        {
            ans[i] = min(ans[i], ans[i + 1] + 1);
            if (t[i] != INF)
            {
                ans[i] = min(ans[i], t[i]);
            }
        }

        for(int i = 1; i <=n; i++){
            cout<< ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
