#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("hohang.inp", "r", stdin);
    freopen("hohang.out", "w", stdout);
// #endif

    long long t;
    cin>>t;
    while (t--){
        long long n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if (s1==s2) cout<<1; else cout<<0;
        cout<<"\n";
    }
}