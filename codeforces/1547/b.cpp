#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        string s;
        cin >> s;
        deque <char> q;
        for(auto c:s){
            q.push_back(c);
        }
        bool ans = true;
        char lst;
        if(q.front() > q.back()){
            lst = q.front();
            q.pop_front();
        } else {
            lst = q.back();
            q.pop_back();
        }

        while(!q.empty()){
            if((int)lst - (int)q.front() == 1){
                lst = q.front();
                q.pop_front();
            }
            else if ((int)lst - (int)q.back() == 1){
                lst = q.back();
                q.pop_back();
            } else {
                break;
            }
        }
        puts((lst == 'a' && q.empty()) ? "YES":"NO");
    }
    return 0;
}
