#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
double n;
void Solve(){
    cin>>n;
    cout<<fixed<<setprecision(8)<<2*n/(n+1)<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
