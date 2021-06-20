#include<bits/stdc++.h>
using namespace std;

int a[212345];

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int t = 0;
        if (n > 2){
            for (int i = 1; i + 1 < n; i++)
            {
                if (a[i + 1] - a[i] < a[t + 1] - a[t])
                {
                    t = i;
                }
            }
        } else {
            t = n - 1;
        }
        
        
        for(int i = t + 1; i < n; i++){
            cout << a[i] << " ";
        }
        for (int i = 0; i <= t; i++)
        {
            cout << a[i] << " ";
        }
        cout<< "\n";
    }
    return 0;
}
