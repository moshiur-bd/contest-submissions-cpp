#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n,x;
        cin >> n;
        vector<int> a, b;
        int suma = 0, sumb = 0; 
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
            suma += x;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            b.push_back(x);
            sumb += x;
        }

        if(suma != sumb){
            cout<<"-1\n";
        } else {
            vector<int> inc, dec;
            for(int i = 0; i < n; i++){
                int diff = a[i] - b[i];
                if(diff > 0){
                    while(diff--){
                        inc.push_back(i + 1);
                    }
                }
                else if(diff < 0){
                    diff = -diff;
                    while (diff--)
                    {
                        dec.push_back(i + 1);
                    }
                }
            }

            cout << (int)inc.size() << "\n";
            for(int i=0; i< inc.size(); i++){
                cout << inc[i] << " " << dec[i] << "\n";
            }
        }
    }
    return 0;
}
