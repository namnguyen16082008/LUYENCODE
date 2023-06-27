#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll t,n;
pair <ll,ll> a[N+5];
bool comp(const pair <ll,ll> a, const pair <ll,ll> b){
    return (a.first>b.first || (a.first==b.first && a.second<b.second));
}
void Solve(){
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a+1,a+n+1,comp);
    ll d=0;
    for (ll i=1;i<=n;i++){
        if (i==1 || a[i].first!=a[i-1].first) d++;
        if (d==3){
            cout<<a[i].first<<" "<<a[i].second<<endl;
            return;
        }
    }
    cout<<"Khong the tim duoc!"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
