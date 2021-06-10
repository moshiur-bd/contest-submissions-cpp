#include<bits/stdc++.h>
using namespace std;

char s[512345];

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        scanf("%d %s", &n, s);
        int d = 0, k = 0;
        for(int i = 0; i < n ; i++){
            if(s[i]=='D') d++;
            if(s[i]=='K') k++;
            printf("%d ", __gcd(d, k));
        }
        printf("\n");
    }
    return 0;
}
