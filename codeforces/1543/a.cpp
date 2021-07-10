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
        ll a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        ll d = b - a;
        if(d == 0){
            cout << "0 0\n";
        }else {
            cout << d << " " << min(a - (a / d) * d, (b / d) * d - a) << "\n";
        }

    }
    return 0;
}
