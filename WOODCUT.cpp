#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,a,ans=0;
priority_queue <ll,vector<ll>,greater<ll>> pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        pq.push(a);
    }
    while (pq.size()>1){
        ll x,y;
        x=pq.top();
        pq.pop();
        y=pq.top();
        pq.pop();
        pq.push(x+y);
        ans+=x+y;
    }
    cout<<ans;
}
