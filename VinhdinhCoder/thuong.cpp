#include <bits/stdc++.h>
using namespace std;
long long f[301][301],a[301][301];
long long inf=1e18;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("thuong.inp", "r", stdin);
    freopen("thuong.out", "w", stdout);
// #endif

    long long n,m;
    cin>>n>>m;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) cin>>a[i][j];
        f[i][1] = a[i][1];
    }

    for (int j=1; j<=m; j++){
        f[0][j] = -inf;
        f[n+1][j] = -inf;
    }

    for (int i=1 ;i<=n; i++)
        for (int j=2; j<=m; j++){
            f[i][j] = max({f[i-1][j-1],f[i][j-1], f[i+1][j-1],0}) + a[i][j];
        }
    
    long long res=-inf;
    for (int i=1; i<=n; i++) res=max(res, f[i][m]);
    
    cout<<res;
}