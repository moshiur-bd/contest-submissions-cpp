#include<bits/stdc++.h>
using namespace std;
int a[100006];
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int cnt=1;
        int diff=INT_MAX;
        int d=0;
        for(int i=1;i<n;i++)
        {
            d=abs(a[i]-a[i-1]);
            if(d<diff)
            {
                diff=d;
            }
            if(a[i]>diff)
            {
                break;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
