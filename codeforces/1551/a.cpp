#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin >> n;
        int c1 = n / 3;
        int c2 = c1;
        int d = (n - c1 - (2 * c2));
        if (d == 1) c1++;
        else if (d == 2) c2++;
        printf("%d %d\n", c1, c2);
    }
    return 0;
}
