#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,x,y;
void Solve(){
    cin>>x>>y;
    if (x>y) cout<<(x-x%2)*(x-x%2)+y*(x%2-(x%2==0))+(x%2==0)<<endl;
    else cout<<(y-(y%2==0))*(y-(y%2==0))+x*((y%2==0)-(y%2==1))+(y%2==1)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
