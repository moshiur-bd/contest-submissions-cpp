#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> ors, ands;

inline ll setBit(ll n, int i){
    return n | (1ll << i);
}

inline bool checkBit(ll n, int i){
    return (n & (1ll << i)) != 0;
}

inline ll getKnown(ll or12, ll and12){
    ll known = ands[1] & ands[2];
    for(int i = 0; i <= 31; i++){
        if(!checkBit(known, i) && !checkBit(and12, i) && (checkBit(ors[1], i) && checkBit(ors[2], i))){
            known = setBit(known, i);
        }
    }
    return known;
}

ll calcNum(int idx, ll known){
    ll num = ands[idx];
    for (int bit = 0; bit <= 31; bit++){
        if (!checkBit(num, bit) && checkBit(ors[idx], bit) && !checkBit(known, bit)){
            num = setBit(num, bit);
        }
    }
    return num;
}

int main(){
    // freopen("in.txt", "r", stdin);
    int n, k;
    cin >> n >> k;
    ors.resize(n);
    ands.resize(n);
    for(int i = 1; i < n; i++){
        cout << "or " << 1 << " " << i + 1 << endl;
        cin >> ors[i];
        cout << "and " << 1 << " " << i + 1 << endl;
        cin >> ands[i];
    }

    ll or12, and12;
    cout << "or " << 2 << " " << 3 << endl;
    cin >> or12;
    cout << "and " << 2 << " " << 3 << endl;
    cin >> and12;

    ll known = getKnown(or12, and12);

    vector<ll> nums;
    nums.push_back(known);
    for(int i = 1; i < n; i++){
        nums.push_back(calcNum(i, known));
    }
    sort(nums.begin(), nums.end());
    cout << "finish " << nums[k - 1] << endl;
    return 0;
}
