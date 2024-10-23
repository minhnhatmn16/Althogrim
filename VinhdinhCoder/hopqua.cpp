#include <bits/stdc++.h>
using namespace std;
long long get(long long n){
    return n*(n+1)/2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("hopqua.inp", "r", stdin);
    freopen("hopqua.out", "w", stdout);
// #endif

    long long n,k;
    cin>>n>>k;
    long long a[n+3];
    for (int i=1; i<=n; i++) cin>>a[i];

    sort(a+1,a+n+1);

    long long res=0;
    for (int i=1 ;i<=n-2; i++) {
        auto it = upper_bound(a+i,a+n+1,a[i]+k) - a;
        it--;
        if (it>=i+2) {
            res+=get(it-i-1);
        }
    }
    cout<<res;

}