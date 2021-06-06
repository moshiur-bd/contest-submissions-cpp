#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;

    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin>>n;
        int a[105];
        int minn=INT_MAX;
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
            if(a[i]<minn)
            {
                minn=a[i];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>minn)
            {
             cnt++;
            }
        }

        cout<<cnt<<"\n";
    }
    return 0;
}
