#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,x,y,z;
void Solve(){
    cin>>x>>y>>z;
    if (abs(x-z)<abs(y-z)) cout<<"Cat A"<<endl;
    else if (abs(x-z)>abs(y-z)) cout<<"Cat B"<<endl;
    else cout<<"Mouse C"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
