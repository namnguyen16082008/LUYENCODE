#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005;
ll n,a[N],ans=0;
ll Check(ll i, ll j){
    while (i<j){
        if (a[i]!=a[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++)
        for (ll j=i;j<=n;j++)
            if (Check(i,j)) ans=max(ans,j-i+1);
    cout<<ans;
}
