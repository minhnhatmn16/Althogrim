#include <bits/stdc++.h>
using namespace std;
long long a[1000000],n,k;
long long get(long long mid){
    long long res=0;
    for (int i=1; i<=n; i++){
        res+=a[i]/mid;
        if (res>=k) return res;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("catthep.inp", "r", stdin);
    freopen("catthep.out", "w", stdout);
// #endif

    cin>>n>>k;

    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);

    long long l=1,r=1e9,mid;

    long long ans;
    while (l<=r) {
        mid=(l+r)/2;
        if (get(mid)>=k)  {
            ans=mid;
            l=mid+1;
        } else r=mid-1;
    }
    cout<<ans;

}