#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N],ans=0,d=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (i!=1){
            if (a[i]*a[i-1]<0) d++;
            else{
                ans=max(ans,d);
                d=1;
            }
        }
    }
    ans=max(ans,d);
    (ans==1) ? cout<<-1 : cout<<ans;
}
