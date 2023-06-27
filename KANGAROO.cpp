#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,xa,va,xb,vb;
void Solve(){
    cin>>xa>>va>>xb>>vb;
    ((xb-xa)%(va-vb)==0 && (xb-xa)/(va-vb)>=0) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
