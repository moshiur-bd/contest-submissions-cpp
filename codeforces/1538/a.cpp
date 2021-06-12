#include<bits/stdc++.h>
using namespace std;
int a[120];
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin>>n;
        int maxx=INT_MIN;
        int minn=INT_MAX;
        int g=0,f=0;
        int min_dis=0;
        int max_dis=0;
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
          if(a[i]<minn)
          {
              minn=a[i];
              g=i;
          }
          if(a[i]>maxx)
          {
              maxx=a[i];
              f=i;
          }
        }
    //     min_dis=min(g+1,n-g);
    //     max_dis=min(f+1,n-f);
    //    //
    //     max_dis=min(max_dis,abs(min_dis-max_dis));
    //     // if(maxx<(abs(max_dis-min_dis)))
    //     // {
    //     //     max_dis=max_dis+1;
    //     // }
        
    //     cout<<(min_dis+max_dis)<<"\n";

        int mn = min(f, g), mx = max(f, g);
        int s1 = mx + 1;
        int s2 = n - mn;
        int s3 = n - (mx - mn - 1);


        cout<< min(s1, min(s2, s3))<<endl;

    }
    return 0;
}
