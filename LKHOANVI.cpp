#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,y[10];
void Solve(ll x[10], ll o){
    for (ll i=1;i<=n;i++){
        if (x[i]==0){
            y[o]=i; x[i]=1;
            if (o<n) Solve(x,o+1);
            else{
                for (ll i=1;i<n;i++) cout<<y[i]<<" ";
                cout<<y[n]<<endl;
            }
            x[i]=0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    ll x[10]={};
    Solve(x,1);
}
