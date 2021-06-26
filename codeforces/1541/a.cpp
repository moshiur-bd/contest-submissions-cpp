#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin>>n;
        int lst = 0;
        if(n % 2 == 1){
            lst = n;
            n -= 3;
        }
        for (int i = 1; i * 2 <= n; i++)
        {
            cout << 2 * i << " " << 2 * i - 1 << " ";
        }
        
        if (lst >= 3){
            cout<< lst << " " << lst - 2 << " " << lst -1;
        }
        cout<<"\n";
    }
    return 0;
}
