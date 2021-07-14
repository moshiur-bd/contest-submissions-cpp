#include<bits/stdc++.h>
using namespace std;

int cnt[26][112345];

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);

    for(int tc = 1; tc <= TC; tc++){
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < 26; i++){
            for(int j = 0 ; j < m; j++){
                cnt[i][j] = 0;
            }
        }
        string s;
        for(int i = 0; i < n; i++){
            cin>>s;
            for(int j = 0; j < m; j++){
                cnt[s[j] - 'a'][j] ++;
            }
        }

        for (int i = 1; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                cnt[s[j] - 'a'][j]--;
            }
        }
        string ans = "";
        char sel;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < 26; j++){
                if(cnt[j][i] == 1){
                    sel = 'a' + j;
                    break;
                }
            }
            ans.push_back(sel);
        }
        cout<<ans<<endl;
    }
    return 0;
}
