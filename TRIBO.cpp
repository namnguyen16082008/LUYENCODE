#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll X=40;
ll n,a[X];
void Build(){
    a[0]=0,a[1]=0,a[2]=1;
    for (ll i=3;i<=X;i++) a[i]=a[i-1]+a[i-2]+a[i-3];
}
ll Find(ll x){
    ll l=0,r=37;
    while (l<r){
        ll md=(l+r)/2;
        if (a[md]>=x) r=md;
        else l=md+1;
    }
    return l;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    while (cin>>n) cout<<a[Find(n)]<<endl;
}

