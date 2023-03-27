#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,a[100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    a[1]=1,a[2]=2;
    for (ll i=3;i<=90;i++) a[i]=a[i-1]+a[i-2];
    cin>>t;
    while (t--){
        cin>>n;
        cout<<a[n]<<endl;
    }
}
