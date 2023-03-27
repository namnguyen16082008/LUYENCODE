#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,a,b,c;
void Solve(){
    cin>>a>>b>>c;
    if (c>a && c>b && c!=a+b) cout<<"NO"<<endl;
    else if (c%__gcd(a,b)==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
