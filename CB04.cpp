#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    cout<<a+b<<endl<<a-b<<endl<<a*b<<endl;
    (b==0) ? cout<<"ERROR" : cout<<fixed<<setprecision(2)<<a/b;
}
