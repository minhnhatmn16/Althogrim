#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("duangua.inp", "r", stdin);
    freopen("duangua.out", "w", stdout);
// #endif

    long long k,n;
    cin>>k>>n;

    vector<long long> v(n);
    for (int i=0; i<n; i++) cin>>v[i];

    sort(v.rbegin(),v.rend());
    
    long long res=0;
    for (int i=0; i<k*2; i+=2) res=res+v[i]*v[i+1];
    cout<<res; 
    
    
}