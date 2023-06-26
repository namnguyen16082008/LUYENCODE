#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,ans=1,a2=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        x=i;
        while (x%2==0){x/=2;a2++;}
        while (x%5==0){x/=5;a2--;}
        ans=(ans*x)%10;
    }
    for (ll i=1;i<=a2;i++) ans=(ans*2)%10;
    cout<<ans;
}
