#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll V=100005;
ll n,v,x,a[V]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>v;
    for (ll i=1;i<=n;i++){
        cin>>x;
        for (ll j=v;j>=x;j--)
            if (j==x || a[j-x]!=0) a[j]=1;
    }
    for (ll i=v;i>=0;i--)
        if (a[i]!=0 || i==0){
            cout<<i;
            return 0;
        }
}
