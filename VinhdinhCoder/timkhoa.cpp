#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("timkhoa.inp", "r", stdin);
    freopen("timkhoa.out", "w", stdout);
// #endif

    int n;
    cin>>n;


    int a[n+3];
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);

    int ans=1;
    for (int i=1; i*i<=a[1]; i++)
    if (a[1]%i==0) {
        bool kt=true;
        for (int j=1; j<=n; j++)
        if (a[j]%i!=0) {
            kt=false;
            break;
        }
        if (kt) ans=max(ans,i);

        kt=true;
        for (int j=1; j<=n; j++)
        if (a[j]%(a[1]/i)!=0) {
            kt=false;
            break;
        }
        if (kt) ans=max(ans,a[1]/i);
    }  

    cout<<ans;
    
}