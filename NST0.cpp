#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,ans=-1,a[N],x1=0,x2=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[0]=0;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for (ll i=1;i<=n;i++)
       for (ll j=1;j<=i;j++)
           if (a[i]-a[j-1]>=0){
               ans=max(ans,i-j+1);
               break;
           }
    cout<<ans;
}
