#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    for (ll i=1;i<=t;i++){
        cin>>n>>a;
        if (n>2*a) cout<<"Ban";
        else if (n>a) cout<<"Warn";
        else cout<<"None";
        cout<<endl;
    }
}
