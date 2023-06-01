#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c,t=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    cout<<max(t,max(a,max(b,c))*2-a-b-c+1);
}
