#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n, k, x;
        scanf("%d %d", &n, &k);
        unordered_map<int, vector<int>> m;
        vector<int> a;
        vector<int> b;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            a.push_back(x);
            b.push_back(-1);
            if(m[x].size() == k){
                b[i] = 0;
                continue;
            }
            m[x].push_back(i);
            cnt++;
        }
        int col = 0;
        int endAt = (cnt / k) * k;
        for(auto &item:m){
            for(auto &i:item.second){
                if(col < endAt){
                    b[i] = (col % k)  + 1;
                    col++;
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(b[i] != -1) continue;
            if (col < endAt){
                b[i] = (col % k) + 1;
                col++;
            } else {
                b[i] = 0;
            }
        }

        for(auto &v:b){
            printf("%d ", v);
        }
        printf("\n");

    }
    return 0;
}
