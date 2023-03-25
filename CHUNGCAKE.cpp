#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,V,ans[2001]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>V;
    for (ll i=1;i<=n;i++){
        cin>>x;
        for (ll j=V;j>=x;j--)
            if (j==x || ans[j-x]!=0)
                ans[j]=max(ans[j],ans[j-x]+1);
    }
    for (ll i=V;i>=0;i--)
        if (i==0 || ans[i]!=0){
            cout<<i;
            return 0;
        }
}
