#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,m,a,b;
void Solve(){
    cin>>n>>m>>a>>b;
    cout<<min(n*a,min((n+m-1)/m*b,n/m*b+(n%m)*a))<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
