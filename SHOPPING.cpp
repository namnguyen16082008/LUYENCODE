#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,m,n;
void Solve(){
    cin>>m>>n;
    (m==1) ? cout<<1<<endl : cout<<n/3*2+(n%3!=0)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
