#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n, maxx = INT_MIN, x;
        cin>>n;
        bool isValid = true;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            maxx = max(maxx, x);
            if(x < 0) isValid = false;
        }
        if(isValid)
        {
            cout<<"YES"<<"\n" << maxx+1 << " " ;
            for(int i=0;i<=maxx;i++) cout<<i<<" ";
            cout<<"\n";
        } else cout <<"NO\n"; 
    }
    return 0;
}
