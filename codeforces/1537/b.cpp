#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll, ll>

inline ll dist(pll a, pll b){
    return abs(a.first - b.first) + abs(a.second - b.second);
}

inline ll distance(pll a, pll b, pll c){
    return dist(a, b) + dist(b, c) + dist(c, a);
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll n, m;
        pll a;
        cin>>n>>m>>a.first>>a.second;
        vector<pll> corners = {{1ll, 1ll}, {n, m}, {1ll, m}, {n, 1ll}};
        pll b, c; 
        ll mx = -983485488ll;
        for(int i = 0; i <corners.size(); i++){
            for(int j = 0; j <corners.size(); j++){
                ll d = distance(a, corners[i], corners[j]);
                if(d > mx){
                    mx = d;
                    b = corners[i];
                    c = corners[j];
                }
            }
        }
        printf("%lld %lld %lld %lld\n", b.first, b.second, c.first, c.second);
    }
    return 0;
}
