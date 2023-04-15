#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    if (a==0 && b==0) cout<<"INF";
    else if (a==0 && b!=0) cout<<"NO";
    else cout<<fixed<<setprecision(2)<<-b/a;
}
