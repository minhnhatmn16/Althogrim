#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

   
    long long t;
    cin>>t;
    while (t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        int d0=0,d1=0;
        for (auto x:s)
        if (x=='1') d1++; else d0++;
        if (d1%2==1){
            
        }
    }

}