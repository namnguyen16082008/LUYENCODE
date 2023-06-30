#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000,inf=1e+18;
ll n,l,a,b,ans1=-inf,ans2=-inf,x[N+5]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l;
    for (ll i=1;i<=n;i++){
        cin>>a>>b;
        ll ans3=0;
        ans1=max(ans1,b-a+1);
        for (ll j=a;j<=b;j++)
            if (!x[j]){
                x[j]=1;
                ans3++;
            }
        ans2=max(ans2,ans3);
    }
    cout<<ans1<<" "<<ans2;
}
