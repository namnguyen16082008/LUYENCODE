#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,p;
void Solve(){
    cin>>n>>p;
    cout<<min(p/2,n/2-p/2)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
