#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n, x;
        cin >> n;
        vector<int> a(n + 1, 0), b(n + 1, 0);
        unordered_map<int, vector<int>> wished;
        unordered_set<int> unwished;
        for(int i = 1; i <= n; i++){
            cin >> x;
            a[i] = x;
            wished[x].push_back(i);
        }
        for(int i = 1; i <= n; i++){
            if(wished.find(i) == wished.end()){
                unwished.insert(i);
            }
        }
        int fullfilled = wished.size();
        for(auto &item: wished){
            for(int i = 0; i < item.second.size(); i++){
                if((i + 1) == (int)item.second.size() || unwished.find(item.second[i]) != unwished.end()){
                    b[item.second[i]] = item.first;
                    break;
                }
            }
        }
        int lastIdx = 0;
        for(int i = 1; i <= n; i++){
            if(b[i] == 0 && !unwished.empty()){
                auto it = unwished.begin();
                if(i == *it){
                    if ((int)unwished.size() == 1)
                    {
                        b[i] = *it;
                        swap(b[i], b[lastIdx]);
                        break;
                    }
                    
                    it++;
                }

                b[i] = *it;
                unwished.erase(it);
                lastIdx = i;
            }
        }
        printf("%d\n", fullfilled);
        for(int i = 1; i <= n; i++){
            printf("%d ", b[i]);
        }
        printf("\n");

    }
    return 0;
}
