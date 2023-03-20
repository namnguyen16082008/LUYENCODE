#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,x,y;
void Solve(){
    cin>>x>>y;
    cout<<(x/y)*(x/y)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
