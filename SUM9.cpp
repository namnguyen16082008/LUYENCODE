#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n;
double ans;
void Solve(){
    ans=1;
    cin>>n;
    for (ll i=1;i<=n;i++)
        ans=1/(1+ans);
    cout<<fixed<<setprecision(5)<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
