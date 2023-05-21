#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
string s;
void Solve(){
    getline(cin,s);
    ll ans=0;
    for (ll i=0;i<s.size();i++)
        if (s[i]==' '){
            ans++;
            while (s[i+1]==' ' && i<s.size()-1) i++;
        }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    cin.ignore();
    while (t--) Solve();
}
