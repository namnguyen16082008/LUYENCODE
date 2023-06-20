#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,s=1,a[25],b[25];
void Build(){
    a[0]=0,b[0]=1;
    for (ll i=1;i<=23;i++){
        if (i!=1) s*=5;
        a[i]=a[i-1]+s;
        b[i]=b[i-1]*5;
    }
}
void Solve(){
    cin>>n;
    ll ans=0;
    for (ll i=23;i>=1;i--)
        if (n>=a[i]){
            ans+=(n/a[i])*b[i];
            n%=a[i];
        }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>t;
    while (t--) Solve();
}
