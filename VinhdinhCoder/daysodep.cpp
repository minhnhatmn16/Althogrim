#include <bits/stdc++.h>
using namespace std;
long long uoc(long long x){
    long long d=0;
    for (int i=1; i*i<=x; i++)
    if (x%i==0){
        d+=2;
        if (i*i==x) d--;
    }
    return d;
}
long long daycontang(vector<int> &v){
    vector<int> a;
    for (int i = 0; i < v.size(); ++i)
    {
        int x = v[i];
        vector<int>::iterator it;
        it = lower_bound(a.begin(), a.end(), x);
        if (it != a.end()) *it = x;
        else a.push_back(x);
    }

    return a.size();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("daysodep.inp", "r", stdin);
    freopen("daysodep.out", "w", stdout);
// #endif

    long long n;
    cin>>n;
    vector<int> v;
    for (int i=1; i<=n; i++){
        long long x;
        cin>>x;
        v.push_back(uoc(x));
    }

    cout<<daycontang(v);
    

}