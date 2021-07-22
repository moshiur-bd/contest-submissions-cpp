#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        string s;
        cin >> s;
        int ans = 1;
        for(int i = 0; i < s.size(); i++){
            ans = max(ans, (s[i] - '0'));
        }
        cout<< ans << "\n";
    }
    return 0;
}
