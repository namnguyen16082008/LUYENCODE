#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    (b*2%a==0) ? cout<<b*2/a : cout<<b*2/a+1;
}
