#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll n,a,mi=inf,mx=-inf,vmi,vmx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        if (a<mi){mi=a;vmi=i;}
        if (a>mx){mx=a;vmx=i;}
    }
    cout<<mi<<" "<<vmi<<" "<<mx<<" "<<vmx;
}
