#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("quatangtt.inp", "r", stdin);
    freopen("quatangtt.out", "w", stdout);
// #endif

   
    long long n,k;
    cin>>n>>k;

    long long a[n+3];
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);

    long long res=0;
    for (int i=1; i<=n; i++) 
    if (a[i]<k){
        auto it = upper_bound(a+i,a+n+1,k-a[i]) - a;
        it--;
        if (it>i) res=max(res,a[i]+a[it]);
    }
    cout<<res;
    

}