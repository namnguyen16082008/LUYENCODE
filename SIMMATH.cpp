#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=998244353;
ll t,a,b,c,x,y,z;
void Solve(){
    cin>>a>>b>>c;
    x=(a*(a+1)/2)%MOD;
    y=(b*(b+1)/2)%MOD;
    z=(c*(c+1)/2)%MOD;
    cout<<(((x*y)%MOD)*z)%MOD<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
