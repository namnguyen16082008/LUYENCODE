#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--){
        cin>>n;
        x=n/8;
        if (n%8==0) cout<<x*5<<" "<<x*2<<" "<<x<<endl;
        else cout<<-1<<endl;
    }
}
