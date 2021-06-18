#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int y, x;
        cin>>y>>x;
        y *= 100;
        x += 100;
        cout<< (y/x) << "\n";
    }
    return 0;
}
