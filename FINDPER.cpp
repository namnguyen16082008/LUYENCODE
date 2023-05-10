#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n,a[N],x[N],l,r;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    l=1,r=n;
    for (ll i=n;i>=1;i--) cin>>a[i];
    for (ll i=1;i<=n;i++)
        if (i%2==1){
            x[l]=a[i];
            l++;
        }
        else if (i%2==0){
            x[r]=a[i];
            r--;
        }
    for (ll i=1;i<=n;i++) cout<<x[i]<<" ";
}
