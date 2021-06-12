#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
          sum=sum+a[i];
        }
        if(n==1)
        {
            cout<<0<<"\n";
        }
        else if(sum%n != 0)
        {
            cout<<-1<<"\n";
        }
        else
        {
            int val=sum/n;
            int countt=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]>val)
                {
                    countt++;
                }
            }
            cout<<countt<<"\n";
        }
    }
    return 0;
}
