#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[1123456];
int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            scanf("%d", a + i);
        }
        sort(a, a + n);
        ll sum = 0;
        for(int i = 0; i + 1 < n; i++){
            sum += a[i];
        }
        double ans = ((double)sum / (double)(n - 1))  + (double)a[n - 1];
        printf("%0.9f\n", ans);
    }
    return 0;
}
