#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,x[20];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    x[1]=31,x[2]=28,x[3]=31,x[4]=30,x[5]=31,x[6]=30,x[7]=31,x[8]=31,x[9]=30,x[10]=31,x[11]=30,x[12]=31;
    if (a<=0 || a>12 || b<=0 || b>100000) cout<<"INVALID";
    else if (b%400==0 || (b%4==0 && b%100!=0)) (a==2) ? cout<<29 : cout<<x[a];
    else cout<<x[a];
}
