#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105;
ll n;
string a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<string>());
    for (ll i=1;i<=n;i++) cout<<a[i];
}
