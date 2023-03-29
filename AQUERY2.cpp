#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll q,k,x,y;
pair <ll,ll> a[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>q;
    for (ll i=1;i<=q;i++){
        cin>>x>>y;
        a[i]={x,y};
    }
    cin>>k;
    sort(a+1,a+q+1);
    for (ll i=1;i<=q;i++){
        k-=a[i].second;
        if (k<=0){
            cout<<a[i].first;
            return 0;
        }
    }
}
