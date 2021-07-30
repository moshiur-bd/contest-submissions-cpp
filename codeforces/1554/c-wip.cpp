#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll n, m;
        cin >> n >> m;
        for(ll i = 0; i <= m ; i++){
            printf("%d ^ %d = %d\n", n, i, n^i);
        }
    }
    return 0;
}
