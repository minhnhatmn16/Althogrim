#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// #ifndef ONLINE_JUDGE
    freopen("passw.inp", "r", stdin);
    freopen("passw.out", "w", stdout);
// #endif

    long long k;
    cin>>k;
    cin.ignore();
    string s;
    getline(cin,s);
    vector<int> v;
    for (auto x:s)
    if ('0'<=x && x<='9') v.push_back(x-'0');
    
    k=v.size()-k;

    deque<int> q;
    int i=0;
    while (k && i<v.size()){
        if (q.empty()) {
            q.push_back(v[i]);
            i++;
            continue;
        }     
        while (!q.empty() && q.back() < v[i] && k) {
            q.pop_back();
            k--;
        } 
        q.push_back(v[i]);
        i++;
    }
    for (int j=i; j<v.size(); j++) q.push_back(v[j]);
    while (k){
        k--;
        q.pop_back();
    }
    for (int i=0; i<q.size(); i++)  cout<<q[i]; cout<<"\n";
    bool kt=true;
    for (int i=0; i<q.size()/2; i++)
    if (q[i]!=q[q.size()-i-1]) kt=false;
    if (kt) cout<<"YES"; else cout<<"NO";
}