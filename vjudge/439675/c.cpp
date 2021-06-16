#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int n,x;
    cin >> n;
    unordered_map<int, int> cnts;
    for(int i = 0; i < n; i++){
        cin>>x;
        cnts[__builtin_popcount(x)]++;
    }
    int ans = 0;
    for(auto v: cnts){
        ans += (v.second * (v.second - 1)) / 2;
    }
    cout<<ans<<endl;
    return 0;
}
