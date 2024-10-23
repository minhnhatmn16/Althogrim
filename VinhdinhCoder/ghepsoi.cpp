#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("ghepsoi.inp", "r", stdin);
    freopen("ghepsoi.out", "w", stdout);
// #endif

    long long n;
    cin>>n;
    long long a[n+3];
    
    priority_queue<long long,vector<long long> , greater<long long>> q;
    for (int i=1 ;i<=n; i++) {
        long long x;
        cin>>x;
        q.push(x);
    }

    long long res=0;
    while (!q.empty()) {
        auto x = q.top(); q.pop();
        if (q.empty()) break;
        auto y = q.top(); q.pop();
        res+=x+y;
        q.push(x+y);
    }
    cout<<res;
}