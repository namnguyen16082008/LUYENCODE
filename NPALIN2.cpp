#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll l,r,ans,a[20]={0,9,18,108,198,1098,1998,10998,19998,109998,199998,1099998,1999998,10999998,19999998,109999998};
string sn;
string strn(ll n){
    ostringstream d;
    d<<n;
    return d.str();
}
ll Check(){
    for (ll i=sn.size()/2-1;i>=0;i--)
        if (sn[i]>sn[sn.size()-i-1]) return 0;
        else if (sn[i]<sn[sn.size()-i-1]) break;
    return 1;
}
ll Try(ll i, ll n){
    if (i*2>=sn.size()) return (min(sn[i-1],sn[(sn.size()-1)/2])-48-(i==1))*(min(sn[i-1],sn[(sn.size()-1)/2])>'0')+Check();
    ll ans1=((a[sn.size()-2*i]-a[sn.size()-2*i-1])/9*10)*char(sn[i-1]-48-(i==1))*(sn[i-1]!='0');
    return ans1+Try(i+1,n);
}
ll Get(ll n){
    if (n==0) return 0;
    sn=strn(n),ans=a[sn.size()-1];
    return ans+Try(1,n);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>l>>r) cout<<Get(r)-Get(l-1)<<endl;
}
