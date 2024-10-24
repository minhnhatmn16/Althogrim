#include <bits/stdc++.h>
using namespace std;
long long f[100001];
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
    long long res=0;

    for (int i=1; i*i<=n; i++){
        long long d = n/i;
        long long k = d-i+1;
        if (k==1) {
            if (i*i!=n) res++;
        } else {
            res+=k*2;
            if (d*i==n) res-=2;
            res--;
        }
    }
    cout<<res;
}
    