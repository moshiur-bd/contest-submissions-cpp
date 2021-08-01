#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll moveH(ll H, ll h2, ll ymin, ll ymax){
    ll ans1 = max(h2 - (H - ymax), 0ll);
    ll ans2 = max(h2 - ymin, 0ll);
    return min(ans1, ans2);
}

ll moveW(ll W, ll w2, ll xmin, ll xmax)
{
    ll ans1 = max(w2 - (W - xmax), 0ll);
    ll ans2 = max(w2 - xmin, 0ll);
    return min(ans1, ans2);
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        ll W, H;
        cin >> W >> H;
        ll x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ll w1 = abs(x1-x2), h1 = abs(y1-y2);
        ll w2, h2;
        cin >> w2 >> h2;
        if(w1 + w2 <= W || h1 + h2 <= H){
            ll ans = 1ll << 60;
            if(h1+h2 <= H){
                ans = min(ans, moveH(H, h2, min(y1, y2), max(y1, y2)));
            }
            if (w1 + w2 <= W){
                ans = min(ans, moveW(W, w2, min(x1, x2), max(x1, x2)));
            }
            double fAns = ans;
            printf("%0.9f\n", fAns);
        } else {
            puts("-1");
        }
        
    }
    return 0;
}
