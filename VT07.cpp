#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[25],n,d=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (ll i=1;i<=10;i++) cin>>a[i];
    cin>>n;
    for (ll i=1;i<=10;i++)
        if (n==a[i]){
            cout<<i<<" ";
            d=1;
        }
    if (d==0) cout<<-1;
}
