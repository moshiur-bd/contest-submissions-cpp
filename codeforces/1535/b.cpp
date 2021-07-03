
#include<bits/stdc++.h>
using namespace std;

int a[112345];
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        unordered_set<int> taken;
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                if(taken.find(j * 10000 + i) != taken.end()) continue;
                if (__gcd(a[i], 2 * a[j]) > 1){
                    taken.insert(i * 10000 + j);
                    ans ++;
                }
            }
        }

        cout << ans << "\n";

    }
    return 0;
}
