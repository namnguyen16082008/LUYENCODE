#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000;
ll t,n,a[N];
void Solve(){
    cin>>n;
    ll m=0,d=1;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (abs(a[i]-a[i-1])==1 && i>1) d++;
        else d=1;
        m=max(m,d);
    }
    (max(m,d)*2>n) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
