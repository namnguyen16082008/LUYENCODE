#include<bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=1e9+7;
ll n,x[3][3];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    cin>>n;
    n-=1;
    x[1][1]=1,x[1][2]=1,x[2][1]=1,x[2][2]=0;
    while (n>0){
        ll d=1,e[3][3];
        e[1][1]=1,e[1][2]=1,e[2][1]=1,e[2][2]=0;
        while (d*2<=n){
            d*=2;
            ll u[3][3];
            u[1][1]=e[1][1],u[1][2]=e[1][2],u[2][1]=e[2][1],u[2][2]=e[2][2];
            e[1][1]=(u[1][1]*u[1][1]+u[1][2]*u[2][1])%MOD;
            e[1][2]=(u[1][1]*u[1][2]+u[1][2]*u[2][2])%MOD;
            e[2][1]=(u[2][1]*u[1][1]+u[2][2]*u[2][1])%MOD;
            e[2][2]=(u[2][1]*u[1][2]+u[2][2]*u[2][2])%MOD;
        }
        n-=d;
        ll y[3][3];
        y[1][1]=x[1][1],y[1][2]=x[1][2],y[2][1]=x[2][1],y[2][2]=x[2][2];
        x[1][1]=(y[1][1]*e[1][1]+y[1][2]*e[2][1])%MOD;
        x[1][2]=(y[1][1]*e[1][2]+y[1][2]*e[2][2])%MOD;
        x[2][1]=(y[2][1]*e[1][1]+y[2][2]*e[2][1])%MOD;
        x[2][2]=(y[2][1]*e[1][2]+y[2][2]*e[2][2])%MOD;
    }
    cout<<x[1][1];
    return 0;
}
