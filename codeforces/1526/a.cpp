#include<bits/stdc++.h>
using namespace std;

int a[55],b[55]; 

int main(){
    //freopen("in.txt", "r", stdin);
    int test=0,num,value;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>num;
        int n=2*num;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
 
        sort(a, a+n);
        for(int i = 0; i < num; i++){
            b[i * 2] = a[i];
        }
 
        for(int i = 0; i < num; i++){
            b[i * 2 + 1] = a[num + i];
        }
 
        printf("%d", b[0]);
        for(int i = 1; i <n; i++){
            printf(" %d", b[i]);
        }
        printf("\n");
        
    }
    return 0;
}