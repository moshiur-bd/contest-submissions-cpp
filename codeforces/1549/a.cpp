#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll n;
        cin >> n;
        int x = n / 2;
        if(x == 2) x = 4;
        cout << "2 " << x << "\n";
    }
    return 0;
}
