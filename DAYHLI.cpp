#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,d,m,y;
void Solve(){
    ll a[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>d>>m>>y;
    a[2]+=(y%400==0 || (y%4==0 && y%100!=0));
    (m<=12 && d<=a[m]) ? cout<<"TRUE"<<endl : cout<<"FALSE"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
