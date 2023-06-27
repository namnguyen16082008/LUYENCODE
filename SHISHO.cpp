#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=9999;
ll n,ans=0,a[A]={};
string s;
void SangNt(){
    ll i=1;
    a[1]=1;
    while (i*i<=A){
        while (a[i]) i++;
        for (ll j=2;j<=A/i;j++)
            a[i*j]=1;
        i++;
    }
}
ll Change(string s){
    ll x=0;
    for (ll i=s.size()-1;i>=0;i--) x=x*10+int(s[i])-48;
    return x;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SangNt();
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>s;
        ans+=(a[Change(s)]==0);
    }
    cout<<ans;
}
