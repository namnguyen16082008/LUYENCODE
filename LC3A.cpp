#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,x=0;
string a,b;
void Solve(){
    cin>>a>>b;
    ll i=0,j=0;x++;
    while (i<a.size()){
        if (a[i]==b[j]){
            i++;
            j++;
        }
        else j++;
        if (j==b.size() && i!=a.size()){
            cout<<"Case #"<<x<<": IMPOSSIBLE"<<endl;
            return;
        }
    }
    cout<<"Case #"<<x<<": "<<b.size()-a.size()<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
