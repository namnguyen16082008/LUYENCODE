#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
string s;
void Solve(){
    ll n=0;
    cin>>s;
    for (ll i=0;i<s.size();i++)
        (s[i]<='9') ? n=n*16+int(s[i])-48 : n=n*16+int(s[i])-55;
    cout<<n<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
