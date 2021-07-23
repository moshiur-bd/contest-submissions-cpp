#include<bits/stdc++.h>
using namespace std;

bool possible(string &s, string  &t, int p){
    int q = 0;
    if(s[p] != t[q]) return false;
    while(q < t.size() && p < s.size() && s[p] == t[q]) {
        p++;
        q++;
    }
    p--;
    while (q < t.size() && p >= 0 && s[p] == t[q])
    {
        p--;
        q++;
    }
    return q == (int)t.size();
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        string s, t;
        cin >> s >> t;
        bool yes = false;
        for(int i = 0; i < s.size(); i++){
            if(possible(s, t, i)){
                yes = true;
                break;
            }
        }
        puts(yes?"YES":"NO");
    }
    return 0;
}
