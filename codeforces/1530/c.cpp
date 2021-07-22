#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = (n / 4);
    int p = (int)b.size() - (n - m);
    int suma = a.back() - ((m > 0) ? a[m - 1] : 0);
    int sumb = b.back() - ((p > 0) ? b[p - 1] : 0);
    //printf("dbg %d %d: %d %d\n", n, m, suma, sumb);
    return suma >= sumb;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n,x;
        cin >> n;
        vector<int> a, b;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i = 1; i < n; i++){
            a[i] = a[i] + a[i-1];
            b[i] = b[i] + b[i-1];
        }
        int ans = 0;
        while(!check(a, b))
        {
            ans++;
            a.push_back(a.back() + 100);
        }
        cout << ans << "\n";
    }
    return 0;
}
