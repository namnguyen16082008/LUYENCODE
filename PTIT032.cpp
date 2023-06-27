#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200000;
ll n,a[N+5],x[N+5],y[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        (a[i]>a[i-1] && i!=1) ? x[i]=x[i-1]+1 : x[i]=1;
    }
    for (ll i=n;i>=1;i--)
        (a[i]>a[i+1] && i!=n) ? y[i]=y[i+1]+1 : y[i]=1;
    for (ll i=1;i<=n;i++)
        cout<<x[i]+y[i]-1<<" ";
}
