#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin >> n;
        int sum = 0, x;
        for(int i = 0; i < n; i++){
            cin>>x;
            sum += x;
        }
        if(sum >= n){
            cout << sum - n << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
    return 0;
}
