#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("invert.inp", "r", stdin);
    freopen("invert.out", "w", stdout);
// #endif

   
    long long n,q;
    cin>>n>>q;
    long long a[n+3];
    for (int i=1 ;i<=n; i++) cin>>a[i];

    while (q--){
        long long l,r;
        cin>>l>>r;
        long long res=0;
        for (int i=l; i<r; i++)
        for (int j=i+1; j<=r; j++)
        if (a[i]>a[j]) res++;
        cout<<res<<"\n";
    }

}