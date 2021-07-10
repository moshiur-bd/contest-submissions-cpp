#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n, x;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        int ans = 0;
        do{
            bool isSame = true;
            for(int i = 1; i < a.size(); i++){
                if(a[i] != a[i-1]){
                    isSame = false;
                }
            }
            if(isSame) break;
            vector<int> b = a;
            for(int i = 0; i + 1 < a.size(); i++){
                a[i] = __gcd(b[i], b[i+1]);
            }
            a[(int)(a.size())  - 1] = __gcd(b.back(), b[0]);
            ans++;
            b.clear();
        }while(true);
        a.clear();
        cout << ans << "\n";
    }
    return 0;
}
