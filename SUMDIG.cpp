#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
string n;
void Solve(){
    ll ans=0;
    cin>>n;
    for (ll i=0;i<n.size();i++)
        ans+=int(n[i])-48;
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
