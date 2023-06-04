#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=1e9+7;
ll n,m,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>a;
    n=(ll)(n+a-1)/a;
    m=(ll)(m+a-1)/a;
    cout<<((n%MOD)*(m%MOD))%MOD;
}
