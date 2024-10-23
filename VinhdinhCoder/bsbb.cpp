#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("bsbb.inp", "r", stdin);
    freopen("bsbb.out", "w", stdout);
// #endif

    long long n;
    cin>>n;
    long long res=0,d=0;
    for (int i=1; i*i<=n; i++) {
        if (n-i*(n/i)) res+=(n/i)-i;
        if (n-i*(n/i)) d++;
    }
    cout<<res*2-d;
}