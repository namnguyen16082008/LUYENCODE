#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll m,n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    (m*4<n || m*2>n || n%2==1) ? cout<<-1 : cout<<(4*m-n)/2<<" "<<(n-2*m)/2;
}
