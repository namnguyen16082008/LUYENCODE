#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,y=0,a=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>x;
        if (abs(x%2)==1){
            a+=x;
            y++;
        }
    }
    cout<<fixed<<setprecision(4)<<(float)a/(float)y;
}
