#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a[10]={6,2,5,5,4,5,6,3,7,6};
ll Dem(ll n){
    ll s=0;
    if (n<10) s+=6;
    if (n<=0) s+=6;
    while (n>0){
        s+=a[n%10];
        n/=10;
    }
    return s;
}
void End(ll a, ll b){
    if (a<10) cout<<0; cout<<a<<':';
    if (b<10) cout<<0; cout<<b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=0;i<=23;i++)
        for (ll j=0;j<=59;j++)
            if (Dem(i)+Dem(j)==n){
                End(i,j);
                return 0;
            }
    cout<<"Impossible";
}
