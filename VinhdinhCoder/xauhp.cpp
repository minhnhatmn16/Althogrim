#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("xauhp.inp", "r", stdin);
    freopen("xauhp.out", "w", stdout);
// #endif

    long long t;
    cin>>t;
    while (t--){
        string a,b;
        cin>>a;
        b = a;
        reverse(b.begin(),b.end());;

        bool kt=true;
        for (int i=1; i<a.size()-1; i++)
        if (abs(a[i]-a[i+1])!=abs(b[i]-b[i+1])) {
            kt=false;
            break;
        }
        if (kt) cout<<"YES"; else cout<<"NO";
        cout<<"\n";
    }
}