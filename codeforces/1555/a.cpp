#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll cost(ll n){
    // if(n <= 6) return 15;
    // if(n <= 8) return 20;
    // if(n <= 10) return 25;
    // if(n <= 12) return 30;
    // if(n <= 14) return 35;
    // if(n <= 16) return 40;
    return 15ll + max(0ll, ((n + 1ll)/2ll - 3ll) * 5ll); 
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll n;
        cin >> n;
        cout << cost(n) << "\n";
    }
    return 0;
}
