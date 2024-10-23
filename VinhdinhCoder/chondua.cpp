#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("chondua.inp", "r", stdin);
    freopen("chondua.out", "w", stdout);
// #endif

   
    long long n,x;
    cin>>n;
    map<long long,long long> m;
    for (int i=1; i<=n; i++){
        cin>>x;
        m[x]++;
    }

    long long res=0;
    for (int i=1; i<=n; i++){
        cin>>x;
        res+=n-m[x];
    }
    cout<<res;

}