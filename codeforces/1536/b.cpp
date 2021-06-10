#include<bits/stdc++.h>
using namespace std;
char s[1123];
int n;
set<string> subs;
void genSub(int len){
    subs.clear();
    string str = s;
    for(int i = 0; i <= n - len; i++){
        subs.insert(str.substr(i, len));
    }
}

string findMex(string base, int len){
    if (len == 0) {
        if(subs.find(base) == subs.end()){
            return base;
        }
        return "";
    }
    for(char c='a'; c <='z'; c++){
        base.push_back(c);
        auto ret = findMex( base, len - 1);
        if(ret!= ""){
            return ret;
        }
        base.pop_back();
    }
    return "";
}

void printMex(){
    for(int len=1; len <= 5; len++){
        genSub(len);
        auto ans = findMex("", len);
        if(ans != ""){
            puts(ans.c_str());
            return;
        }
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        scanf("%d %s", &n, s);
        printMex();
    }
    return 0;
}
