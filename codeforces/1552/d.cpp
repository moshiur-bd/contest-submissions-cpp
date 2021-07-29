#include<bits/stdc++.h>
using namespace std;
vector<int> a, b;
int n;
bool possible(){
    if(n == 1) return a[0] == 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(abs(a[i]) == abs(a[j])) {
                return true;
            }
            for (int k = j + 1; k < n; k++)
            {

                b = {abs(a[i]), abs(a[j]), abs(a[k])};
                sort(b.begin(), b.end());
                // if (i == 0 && j == 2 && k == 3)
                {
                    cout << b[0] << " " << b[1] << " " << b[2] << endl;
                }
                if (b[0] + b[1] == b[2] || b[2] - b[1] == b[0])
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        scanf("%d", &n);
        a.clear();
        b.clear();
        int x;
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            a.push_back(x);
        }

        puts(possible() ? "YES" : "NO");
    }
    return 0;
}
