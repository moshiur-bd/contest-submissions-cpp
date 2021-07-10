#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>


vi numToBaseK(int n, int k){
    vi digits;
    while(n > 0){
        int digit = n%k;
        digits.push_back(digit);
        n /= k;
    }
    //padding to make all numbers of same size
    while(digits.size() < 30){
        digits.push_back(0);
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

int BaseKToNum(vi &a, int k){
    int n = 0;
    for(int i = 0 ; i < a.size(); i++){
        n = n * k  + a[i];
    }
    return n;
}

vi xorK(const vi &a, const vi &b, int k){
    vi c;
    for(int i = 0; i < a.size(); i++){
        c.push_back((a[i] + b[i])%k);
    }
    return c;
}



int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int n, k;
        cin >> n >> k;
        vi xsum = numToBaseK(0, k);
        int r;
        for(int i = 0; i < n; i++){
            vi ask = xorK(xsum, numToBaseK(i, k), k);
            cout<<BaseKToNum(ask, k)<<endl;
            cin >> r;
            if (r == 0){
                xsum = xorK(xsum, ask, k);
            } else break;
        }
    }
    return 0;
}
