#include<bits/stdc++.h>
using namespace std;



int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int h, w;
        cin >> h >> w;
        string g[h];
        for(int i = 0; i < h; i++){
            g[i].resize(w, '0');
        }
        for(int i = 0; i < w; i+=2){
            g[0][i] = '1';
            if(h > 2){
                g[h - 1][i] = '1';
            }
        }
        for(int i = 2; i + 2 < h; i+=2){
            g[i][0] = '1';
            if(w > 2){
                g[i][w - 1] = '1';
            }
        }

        for(int i = 0; i < h; i++){
            cout << g[i] << "\n";
        }
        cout<< "\n";
    }
    return 0;
}
