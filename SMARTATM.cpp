#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll S=100005,inf=1e+18;
ll n,x,s,a[S]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<=s;i++) a[i]=inf;
    for (ll i=1;i<=n;i++){
        cin>>x;
        for (ll j=x;j<=s;j++)
            if (j==x || a[j-x]!=inf) a[j]=min(a[j],a[j-x]+1);
    }
    (a[s]==inf) ? cout<<-1 : cout<<a[s];
}
