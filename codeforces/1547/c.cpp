#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int k, n, m, x;
        cin >> k >> n >> m;
        vector<int> a, b, ans;
        for(int i = 0; i <n; i++){
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            b.push_back(x);
        }

        int i = 0, j = 0;
        bool valid = true;
        while(i < a.size() || j < b.size()){
            int opCnt = 0;
            while (i < a.size() && a[i] == 0)
            {
                ans.push_back(a[i++]);
                k++;
                opCnt++;
            }

            while (j < b.size()  && b[j] == 0)
            {
                ans.push_back(b[j++]);
                k++;
                opCnt++;
            }

            while (i < a.size() && a[i] != 0 && a[i] <= k){
                ans.push_back(a[i++]);
                opCnt++;
            }

            while (j < b.size() && b[j] != 0 && b[j] <= k)
            {
                ans.push_back(b[j++]);
                opCnt++;
            }
            if(opCnt == 0) break;
        }

        if((int)ans.size() != (int)a.size() + (int)b.size()){
            valid = false;
        }
        
        if(valid){
            for(i = 0; i < ans.size(); i++){
                cout << ans[i] << " ";
            }
            cout <<"\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
