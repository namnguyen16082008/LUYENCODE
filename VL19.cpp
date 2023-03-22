#include <bits/stdc++.h>
#define ll long long int

ll a,b,d=0;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=b-1;i>a;i--)
        if (i%3==0){
            cout<<i<<" ";
            d++;
        }
    if (d==0) cout<<"NOT FOUND";
}
