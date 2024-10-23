#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long a[n+3];
    for (int i=1 ;i<=n; i++) cin>>a[i];

    deque<long long> q;
    q.push_back(1);
    for (int i=n-1; i>=1; i--)
    if (a[i]*a[i+1]<0) q.push_front(q.front()+1); else q.push_front(1);
    for (auto x:q) cout<<x<<" ";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("doancon.inp", "r", stdin);
    freopen("doancon.out", "w", stdout);
// #endif

    long long t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }
}