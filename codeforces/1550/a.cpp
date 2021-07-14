#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int s;
        cin >> s;
        int ans = 0;
        for(int i = 1; s > 0; i+=2){
            ans ++;
            s -= i;
        }
        cout<< ans << "\n";

    }
    return 0;
}
