#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a[40];
vector <ll> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[0]=1,a[1]=1;
    for (ll i=2;i<=38;i++) a[i]=a[i-1]+a[i-2];
    for (ll i=38;i>=1;i--)
        if (n>=a[i]){
            n-=a[i];
            v.push_back(a[i]);
        }
    cout<<v.size()<<endl;
    for (auto x : v) cout<<x<<" ";
}
