#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >>  s;
        int ones = 0, zeros = 0;
        for(int i = 0; i < s.size();){
            if(s[i] == '1'){
                ones++;
                while(i < s.size() && s[i] == '1') i++;
            } else {
                zeros++;
                while (i < s.size() && s[i] == '0') i++;
            }
        }
        int minOp = min(ones + 1, zeros + 1), maxOp = s.size();
        int ans = maxOp * a + max(minOp * b, maxOp * b);
        cout << ans << "\n";

    }
    return 0;
}
