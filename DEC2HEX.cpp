#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n;
void Solve(){
    string s="";
    cin>>n;
    while (n>0){
        ll x=n%16;
        (x<10) ? s=char(x+48)+s : s=char(x+55)+s;
        n/=16;
    }
    cout<<s<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
