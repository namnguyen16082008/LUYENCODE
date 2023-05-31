#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10005;
ll t,n;
double a[N];
void Build(){
    a[0]=0;
	for (ll i=1;i<=N;i++)
        a[i]=sqrt(2+a[i-1]);
}
void Solve(){
    cin>>n;
    cout<<fixed<<setprecision(5)<<a[n]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
	cin>>t;
	while (t--) Solve();
}
