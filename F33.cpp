#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        ans=(ans*10+3)%n;
        if (ans==0){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}
