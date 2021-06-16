#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s1,s2;
    unordered_map<char,int> umap;
    cin>>n;
    cin>>s1>>s2;
    for(int i=0;i<n;i++)
    {
        umap[s2[i]]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<< umap[s1[i]];
    }
    cout<<endl;
    
    return 0;
}
