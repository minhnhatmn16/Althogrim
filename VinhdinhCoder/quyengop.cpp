#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("quyengop.inp", "r", stdin);
    freopen("quyengop.out", "w", stdout);
// #endif

    long long n;
    cin>>n;

    long long res=(long long) n*(n+1)/2;
    for (int i=1; i*i<=n; i++) res-=i*i;
    cout<<res;
}