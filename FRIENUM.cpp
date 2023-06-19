#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=1000005;
ll n,a,ans=0,x[A]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        x[a]++;
    }
    for (ll i=1;i<=A-5;i++) ans+=x[i]*(x[i]>1);
    cout<<ans;
}

