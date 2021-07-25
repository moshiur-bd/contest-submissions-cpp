#include<bits/stdc++.h>
using namespace std;

int awesomeness(string &s, char t){
    int awsome = 0;
    for(auto &c:s){
        if(c == t) awsome++;
    }
    int bad = (int) s.size() - awsome;
    return awsome - bad;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin >> n;
        vector<string> strs;
        string s;
        for(int i = 0; i < n; i++){
            cin >> s;
            strs.push_back(s);
        }
        int ans = 0;
        vector<int> a;
        for(char t = 'a'; t <= 'e'; t++){
            for(int i = 0; i < n; i++){
                a.push_back(awesomeness(strs[i], t));
            }
            sort(a.begin(), a.end(), greater<int>());
            int sum = 0, localAns = 0;
            for(int i = 0; i < n; i++){
                sum += a[i];
                if(sum <= 0) {
                    break;
                }
                localAns++;
            }
            ans = max(ans, localAns);
            a.clear();
        }
        cout << ans << "\n";
    }
    return 0;
}
