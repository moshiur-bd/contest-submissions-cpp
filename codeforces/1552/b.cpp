#include<bits/stdc++.h>
using namespace std;

int a[112345][5];

inline int isSuperiorP(int p, int q) {
    int lead = 0;
    for(int i = 0; i < 5; i++) {
        if(a[p][i] < a[q][i]) {
            lead++;
        }
    }
    return lead >= 3;
}

bool comp(int p, int q) {
    return isSuperiorP(p, q);
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        scanf("%d", &n);
        unordered_set<int> candidates;
        vector<int> id;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                scanf("%d", &a[i][j]);
            }
            candidates.insert(i);
            id.push_back(i);
        }
        sort(id.begin(), id.end(), comp);

        int ans = -1;
        for(int j = 0; j < n; j++){
            int i = id[j];
            if(candidates.find(i)==candidates.end()){
                continue;
            }
            candidates.erase(i);
                        
            vector<int> failed;
            bool canWin = true;
            for(auto c: candidates){
                if(isSuperiorP(i, c)){
                    failed.push_back(c);
                } else {
                    canWin = false;
                }
            }
            if(canWin){
                ans = i;
                break;
            }
            for(auto &c: failed){
                candidates.erase(c);
            }
            failed.clear();
        }

        if(ans != -1){
            for(int i = 0; i < n; i++){
                if(i != ans && isSuperiorP(i, ans)){
                    ans = -1;
                    break;
                }
            }
            if(ans != -1) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
