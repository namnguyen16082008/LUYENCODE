#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,y,a[20];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>y;
    a[1]=31,a[2]=28,a[3]=31,a[4]=30,a[5]=31,a[6]=30,a[7]=31,a[8]=31,a[9]=30,a[10]=31,a[11]=30,a[12]=31;
    a[2]+=(y%400==0 || (y%4==0 && y%100!=0));
    for (ll i=1;i<=12;i++)
        if (n>a[i]) n-=a[i];
        else{
            cout<<n<<" "<<i;
            return 0;
        }
}
