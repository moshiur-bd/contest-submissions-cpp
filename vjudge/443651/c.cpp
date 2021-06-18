#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n;
        cin>>n;
        int b = 0, l = 0, k = 0;
        string s;
        while(n--){
            cin>>s;
            if (s.rfind("bed", 0) == 0){
                b++;
            }
            if (s.rfind("kitchen", 0) == 0)
            {
                k++;
            }
            if (s.rfind("living", 0) == 0)
            {
                l++;
            }
        }
        cout<< min(b/2, min(l, k)) <<"\n";

    }
    return 0;
}
