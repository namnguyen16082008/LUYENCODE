#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=1e9+7;
ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<((n+1)*(n+2)/2)%MOD;
}
