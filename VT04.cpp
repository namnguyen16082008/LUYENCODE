#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>ans;;
    for (ll i=1;i<=n;i++){
        cin>>x;
        if (x==ans){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
