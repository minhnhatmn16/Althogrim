#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("truyent.inp", "r", stdin);
    freopen("truyent.out", "w", stdout);
// #endif

    int n;
    cin>>n;
    string s;
    cin>>s;
    
    for (int i=1 ;i<=n; i++){
        bool kt=true;
        for (int j=i; j<s.size(); j++)
        if (s[j]!=s[j%i]) {
            kt=false;
            break;
        }
        if (kt) {
            cout<<i;
            return 0;
        }

        
    }
}