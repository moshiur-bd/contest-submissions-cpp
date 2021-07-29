#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin >> n;
        string a;
        cin >> a;
        string b = a;
        sort(b.begin(), b.end());
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
