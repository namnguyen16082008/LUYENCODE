#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=2505;
ll x[N][N],a1,b1;
string a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a1>>b1>>a>>b;
    for (ll i=0;i<N;i++){
        x[i][0]=0;
        x[0][i]=0;
    }
    for (ll i=0;i<a.size();i++)
        for (ll j=0;j<b.size();j++)
            if (a[i]==b[j]) x[i+1][j+1]=x[i][j]+1;
            else x[i+1][j+1]=max(x[i][j+1],x[i+1][j]);
    cout<<x[a.size()][b.size()];
}
