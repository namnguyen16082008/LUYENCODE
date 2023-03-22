#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,s=0,d=0,c=0,a[1000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
    	s=s+a[i];
        if (a[i]%2==0) c=c+1;
        if (a[i]>0) d=a[i];
    }
    cout<<s<<" "<<c<<" "<<d;
}
