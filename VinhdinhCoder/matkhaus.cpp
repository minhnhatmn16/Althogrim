#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("matkhaus.inp", "r", stdin);
    freopen("matkhaus.out", "w", stdout);
// #endif

    string s;
    cin>>s;
    int n= s.size();

    for (int i=1; i<=n; i++)
    if (n%i==0){
        bool kt=true;
        for (int j=i; j<s.size(); j++)
        if (s[j]!=s[j%i]) {
            kt=false;
            break;
        }
        if (kt) {
            map<char,int> m;
            for (int j=0; j<i; j++) m[s[j]]++;
            int maxn=0;
            for (auto x:m) maxn=max(maxn,x.second);
            cout<<maxn;
            return 0;
        }
    }

}