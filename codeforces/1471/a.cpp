#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for (int tc = 1; tc <= TC; tc++)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        ll rem = 0, remCnt = 0, div = 0;
        for (int i = 0; i < n; i++){
            int in;
            cin >> in;
            rem += (in % x);
            div += (in / x);
            remCnt += (in % x) ? 1 : 0;
        }

        cout << div + (rem -1 + x) / x << " " << div + remCnt << endl;
    }
    return 0;
}
