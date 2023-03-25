#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x=0;
pair <ll,ll> a[25];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0){
            x++;
            a[x].first=i;
            a[x].second=0;
            while (n%i==0){
                n/=i;
                a[x].second++;
            }
        }
    if (n>1){
        x++;
        a[x].first=n;
        a[x].second=1;
    }
    cout<<x<<endl;
    for (ll i=1;i<=x;i++) cout<<a[i].first<<" "<<a[i].second<<endl;
}
