#include <bits/stdc++.h>
using namespace std;
long long MAXN=1e6;
long long f[1000003];
long long get(long long k){
    long long res=1;
    while (k!=1) {
        auto x = f[k];
        auto d = 0;
        while (k%x==0){
            k/=x;
            d++;
        }
        res *= (d+1);
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("matong.inp", "r", stdin);
    freopen("matong.out", "w", stdout);
// #endif

    for (int i=1 ;i<=MAXN; i++) f[i]=i;
    for (int i=2; i*i<=MAXN; i++)
    if (f[i] == i) 
        for (int j=i*i; j<=MAXN; j+=i) f[j] = i;

    long long n;
    cin>>n;
    
    long long res=0,x;
    for (int i=1; i<=n; i++){
        cin>>x;
        res+=x*get(x);
    }
    cout<<res;


}