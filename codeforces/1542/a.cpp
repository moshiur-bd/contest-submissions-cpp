#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n,x;
        cin>>n;
        int even = 0, odd = 0;
        for(int i=0; i < 2 * n; i++){
            cin>>x;
            if(x & 1){
                odd++;
            } else {
                even++;
            }
        }
        puts(even == odd ? "Yes": "No");
    }
    return 0;
}
