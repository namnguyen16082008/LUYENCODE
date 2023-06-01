#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=2021;
ll a,b,c,n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>n;
    for (ll i=3;i<=n;i++){
        c=(a+b)%MOD;
        a=b;b=c;
    }
    cout<<c;
}
