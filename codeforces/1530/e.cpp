#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int nextId = 1;
        while(nextId < s.size() && s[nextId] == s[nextId-1]) nextId++;
        string p = s;
        
        int same = nextId, others = (int)s.size() - same;
        if(others <= (same - 3)){
            p = s[0] + s.substr(nextId, others) + s.substr(1, nextId-1);
        }
        else if (others > 0 && nextId > 2){
            int bId = 2;
            int nId = nextId;
            int maxSwaps = nextId - bId;
            p = s.substr(0, 2);
            while(nId < s.size() && s[bId] == s[0]){
                p += s[nId];
                p += s[bId];
                bId ++;
                nId ++;
            }
            if(nId < s.size()){
                p += s.substr(nId, (int)s.size() - nId);
            }
            
        }
        cout << p << "\n";
    }
    return 0;
}
