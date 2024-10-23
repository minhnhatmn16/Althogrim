#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("bus.inp", "r", stdin);
    freopen("bus.out", "w", stdout);
// #endif

    long long n,k;
    cin>>n>>k;
    long long a[n+3];
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);
    long long res=0;
    for (int i=1 ;i<=k; i++) res+=a[i];
    cout<<res;


}