#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,l,r,s=0,ans=0,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
    }
    sort(a+1,a+n+1);
    l=1,r=n;
    while (s!=0){
        if (s>0){
            s-=a[r];
            r--;
        }
        else if (s<0){
            s-=a[l];
            l++;
        }
        ans++;
    }
    cout<<ans;
}
