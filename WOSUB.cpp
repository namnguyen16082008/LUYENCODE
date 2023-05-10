#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N],d=1,s=0,o=0,ans=-1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    cin>>s;
    for (ll i=1;i<=n;i++){
        o+=a[i];
        while (o>s){
            o-=a[d];
            d++;
        }
        if (o==s) ans=max(ans,i-d+1);
    }
    cout<<ans;
}
