#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll m,n,k;
string ans="0";
string Change(ll x){
    ostringstream d;
    d<<x;
    return d.str();
}
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])-96+nho;
        nho=kq/10;
        a[i]=char(kq%10+48);
    }
    return (nho==0) ? a : '1'+a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for (ll i=1;i<=sqrt(k);i++)
        if (k%i==0){
            if (i<=n && k/i<=m) ans=cong(ans,Change((n-i+1)*(m-k/i+1)));
            if (k/i<=n && i<=m && i*i!=k) ans=cong(ans,Change((n-k/i+1)*(m-i+1)));
        }
    cout<<ans;
}
