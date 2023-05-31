#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N],x=1,y=0,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=2;i<=n;i++)
        if (a[i]==a[i-1]) x++;
        else{
            if (y<=x){
                y=x;
                ans=a[i-1];
            }
            x=1;
        }
    if (y<=x){
        y=x;
        ans=a[n];
    }
    cout<<ans<<" "<<y;
}
