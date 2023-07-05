#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=50;
ll n,x=0,y=0,m1=0,m2=0;
string a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++)
        if (a[i]=="Heads"){
            x++;
            m2=max(m2,y);
            y=0;
        }
        else{
            y++;
            m1=max(m1,x);
            x=0;
        }
    cout<<max(m1,x)<<" "<<max(m2,y);
}
