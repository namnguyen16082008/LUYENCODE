#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    if (b==0){
        cout<<"INVALID";
        return 0;
    }
    if (a%b==0){
        cout<<a/b;
        return 0;
    }
    x=__gcd(a,b);
    a/=x,b/=x;
    (b>0) ? cout<<a<<" "<<b : cout<<-a<<" "<<-b;
}
