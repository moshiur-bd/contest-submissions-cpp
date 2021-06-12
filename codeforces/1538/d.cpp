#include<bits/stdc++.h>
using namespace std;


bool iscomp[512345] = {false};
vector<int> primes;
void seieve(){
    for(long long i = 2; i < 512345; i++){
        if(!iscomp[i]){
            primes.push_back(i);
            for(long long j = i * i; j < 512345; j+=i){
                iscomp[j] = true;
            }
        }
    }
}

map<int, int> factorize(int n){
    map<int, int> f;
    int pfi = 0;
    int pf = primes[pfi];
    for(int pfi =0; pfi < primes.size() && n != 1; pfi++){
        pf = primes[pfi];
        while(n%pf==0){
            n/=pf;
            f[pf]++;
        }
    }
    if(n!=1){
        f[n]++;
    }
    return f;
}

bool calc(int a , int b, int k){
    auto fa = factorize(a);
    auto fb = factorize(b);
    int da = 0;
    int db = 0;
    int total = 0;
    for(auto v : fa){
        if (fb[v.first] > v.second) {
            da=1;
        }  
        total += v.second;
    }

    for(auto v : fb){
        if (fa[v.first] > v.second) {
            db=1;
        }
        total += v.second;
    }

    int mn = da + db;
    if(a == b) mn = 2;
    fa.clear();
    fb.clear();

    return k >= mn && k <=total;
}

int main(){
    freopen("in.txt", "r", stdin);
    seieve();
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        int a, b, k;
        cin>>a>>b>>k;
        puts(calc(a, b, k)?"YES":"NO");
    }
    return 0;
}
