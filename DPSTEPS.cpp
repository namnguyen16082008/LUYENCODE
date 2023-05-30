#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005,MOD=1e9+7;
ll n,k,x,a[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    a[1]=1;a[2]=2;
    for (ll i=3;i<=n;i++) a[i]=-1;
    for (ll i=1;i<=k;i++){
        cin>>x;
        a[x]=0;
	}
    if (a[1]==0 && a[2]==0){
        cout<<0;
        return 0;
    }
    else if (a[1]==0 && a[2]!=0){
        a[2]=1;
        a[1]=0;
	}
    for (ll i=3;i<=n;i++)
        if (a[i]!=0)
            a[i]=(a[i-1]+a[i-2])%MOD;
    cout<<a[n];
}
