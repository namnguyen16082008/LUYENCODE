#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a[25];
void Cout(){
    for (ll i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
    return;
}
void Solve(ll i){
    for (ll j=0;j<=1;j++){
        a[i]=j;
        if (i<n) Solve(i+1);
        else if (i==n) Cout();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    Solve(1);
}
