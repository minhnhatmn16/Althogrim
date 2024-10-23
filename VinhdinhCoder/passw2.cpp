#include <bits/stdc++.h>
using namespace std;
long long f1[10000],f2[100000],base=31,mod=1e9+7,power[10000];
long long get(long long x, long long y,long long len){
    return (y - x*power[len] + mod*mod)%mod;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("passw2.inp", "r", stdin);
    freopen("passw2.out", "w", stdout);
// #endif

    power[0]=1;
    for (int i=1; i<=1000; i++) power[i]=(power[i-1]*base)%mod;
    string s;
    cin>>s;

    int n = s.size();
    s = " " + s;

    for (int i=1; i<=n; i++) f1[i]=(f1[i-1]*base + s[i]-'A'+1)%mod;
    for (int i=n; i>=1; i--) f2[i]=(f2[i+1]*base + s[i]-'A'+1)%mod;

    

    int res=1;
    for (int i=1; i<n; i++)
    for (int j=i+1; j<=n; j++)  {
        auto x = get(f1[i-1], f1[j], j-i+1);
        auto y = get(f2[j+1], f2[i], j-i+1);
        if (x==y) 
            res=max(res,j-i+1);
    }
    cout<<res;

    

}