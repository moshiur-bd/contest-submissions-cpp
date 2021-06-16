#include<bits/stdc++.h>
using namespace std;

#define ll long long

inline ll linear(ll n){
    return  4ll * (n/2) + (n%2);
}

inline ll dist(ll a,  ll b , ll c, ll d){
    ll dr = abs(a-c) , dc = abs(b-d);
    ll mx = max(dr, dc), mn = min(dr, dc);
    return linear(mx-mn) + 2ll * mn;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        long long a, b , c, d;
        cin>>a>>b>>c>>d;
        cout<<dist(a,b,c,d)<<"\n";
    }
    return 0;
}
