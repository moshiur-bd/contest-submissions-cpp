#include<bits/stdc++.h>
using namespace std;
int a[212345];
int g[212345];
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin >> n;
        cin >> a[0];
        g[0] = a[0];
        for(int i = 1; i < n; i++){
            cin >> a[i];
            g[i] = a[i] | g[i - 1];
        }
        for(int i = 0; i < n; i++){
            cout << (g[i] ^ a[i]) << " ";
        }
        cout << "\n";
    }
    return 0;
}
