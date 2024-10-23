#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("trambom.inp", "r", stdin);
    freopen("trambom.out", "w", stdout);
// #endif

    long long n,k;
    cin>>n>>k;

    long long minn=1e18;

    long long a[n+3];
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);

    for (int i=1; i<=n-k+1; i++) minn=min(minn,a[i+k-1]-a[i]);
    cout<<minn;
    
    
}