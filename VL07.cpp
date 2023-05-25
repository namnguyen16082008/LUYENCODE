#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double n,k,ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=k+1;i<=n;i++) ans*=i;
    for (ll i=1;i<=n-k;i++) ans/=i;
    cout<<ans;
}
