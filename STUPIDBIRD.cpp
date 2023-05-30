#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll H=500005;
ll n,h,x,a[H]={},ans=1e+18;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>h;
    for (ll i=1;i<=n;i++){
        cin>>x;
        if (x>0){
            a[1]++;
            a[x+1]--;
        }
        else if (x<0) a[h+x+1]++;
    }
    a[0]=0;
    for (ll i=1;i<=h;i++) a[i]+=a[i-1];
    for (ll i=1;i<=h;i++) ans=min(ans,a[i]);
    cout<<ans;
}
