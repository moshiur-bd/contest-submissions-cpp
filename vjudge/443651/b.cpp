#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
       int n;
       double m;
       cin>>n>>m;
       int minPass = ceil((double)n * m);
       for(int i = 0; i < n; i++){
           int x;
           cin>>x;
           if(x>=50){
               minPass --;
           }
       }
       puts((minPass<=0)?"YES":"NO");
    }
    return 0;
}
