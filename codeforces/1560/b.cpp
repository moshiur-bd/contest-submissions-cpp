#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool inRange(ll a, ll ringMax){
    return a >= 1 && a <= ringMax;
}
bool inRange(ll a, ll b, ll c, ll d, ll ringMax){
    return inRange(a, ringMax) && inRange(b, ringMax) && inRange(c, ringMax) && inRange(d, ringMax);
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll a, b, c;
        cin >> a >> b >>c;
        ll diff = abs(b - a);
        ll ringMax = 2 * diff;

        ll d = c + diff;
        if(d > ringMax){
            d -= ringMax;
        }
        
        if(inRange(a, b, c, d, ringMax)){
            cout << d << "\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
