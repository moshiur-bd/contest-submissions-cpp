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
        ll sum = 0, x;
        for(int i = 0; i < n; i++){
            cin >> x;
            sum += x;
        }
        ll rem = sum % n;
        cout<< (n - rem) * rem << "\n";
    }
    return 0;
}
