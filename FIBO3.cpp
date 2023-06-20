#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=35;
ll n,a[N];
void Build(){
    a[1]=1,a[2]=1;
    for (ll i=3;i<=30;i++) a[i]=a[i-1]+a[i-2];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>n;
    for (ll i=1;i<=n;i++) cout<<a[i]<<" ";
}

