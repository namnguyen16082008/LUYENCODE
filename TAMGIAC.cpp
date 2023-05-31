#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double a,b,c,p,s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if (a+b<=c || b+c<=a || c+a<=b) cout<<"NO";
    else{
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<p*2<<" "<<fixed<<setprecision(2)<<s;
    }
}
