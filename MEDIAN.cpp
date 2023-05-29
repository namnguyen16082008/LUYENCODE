#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll n,m,a[N],x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++) cin>>a[i];
    x=(n+1)/2;
    y=(n+1)/2+1;
    if (n%2==1){
        x--;
        m--;
        cout<<a[(n+1)/2]<<" ";
    }
    for (ll i=1;i<=m;i++)
        if (i%2==1){
            cout<<a[x]<<" ";
            x--;
        }
        else if (i%2==0){
            cout<<a[y]<<" ";
            y++;
        }
}
