#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        string s;
        cin >> s;
        unordered_map<char, int> m;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(m[s[i]] == 2){
                continue;
            }
            m[s[i]]++;
            ans++;
        }
        cout << (ans/2) << "\n";
    }
    return 0;
}
