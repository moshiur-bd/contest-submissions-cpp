#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        unordered_map<int, int> r, c;
        int n;
        scanf("%d", &n);
        long long ans = 0;
        while(n--){
            int x, y;
            scanf("%d %d", &x, &y);
            ans += c[x] + r[y];
            r[x]++;
            c[y]++;
        }
        printf("%lld\n", ans);
    }
    return 0;
}
