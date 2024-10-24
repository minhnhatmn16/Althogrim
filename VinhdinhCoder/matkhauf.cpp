#include <bits/stdc++.h>
using namespace std;
long long f[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("matkhauf.inp", "r", stdin);
    freopen("matkhauf.out", "w", stdout);
// #endif

    string s;
    getline(cin,s);
    vector<int> v1,v2,v3;
    for (int i=0; i<s.size(); i++)
    if ('A'<=s[i] && s[i]<='Z') v1.push_back(i); else 
    if ('a'<=s[i] && s[i]<='z') v2.push_back(i); else 
    if ('0'<=s[i] && s[i]<='9') v3.push_back(i);


    long long res=0;
    for (int i=0; i<s.size(); i++){
        int x = lower_bound(v1.begin(), v1.end(),i) - v1.begin();
        int y = lower_bound(v2.begin(), v2.end(),i) - v2.begin();
        int z = lower_bound(v3.begin(), v3.end(),i) - v3.begin();
        if (x==v1.size()) continue;
        if (y==v2.size()) continue;
        if (z==v3.size()) continue;

        x=v1[x];
        y=v2[y];
        z=v3[z];
        if (max(max(x,y),max(z,i+5))<s.size()) res+=s.size()- max(max(x,y),max(z,i+5));

    }
    cout<<res;
}
    