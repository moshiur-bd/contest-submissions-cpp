#include<bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n, r;
        cin>>n>>r;
        string now, last;
        unordered_map<string, set<string>> indegrees;
        for(int i = 0; i < r; i++){
            int m;
            cin >> m >> last;
            indegrees[last]; // create a key for all buttons
            for(int j = 0; j < m - 1; j++){
                cin >>  now;
                indegrees[now].insert(last);
                last = now;
            }
        }
        vector<string> ans;
        bool valid = true;
        while(n--){
            int zero = 0;
            for(auto v: indegrees){
                if(v.second.empty()){
                    zero++;
                    ans.push_back(v.first);
                }
            }

            if(zero != 1){
                valid = false;
                break;
            }

            // erase nodes with indegree zero
            indegrees.erase(ans.back());
            for(auto &v: indegrees){
                v.second.erase(ans.back());
            }
        }
        if(valid){
            cout<<ans[0];
            for(int i = 1; i < ans.size(); i++){
                cout << " " <<ans[i];
            }
            cout<<"\n";
        } else {
            cout<<"NOT ENOUGH INFO\n";
        }

    }
    return 0;
}
