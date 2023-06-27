#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a2=0,a5=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n%2==0){
        n/=2;
        a2++;
    }
    while (n%5==0){
        n/=5;
        a5++;
    }
    (n!=1) ? cout<<"NO" : cout<<max(a2,a5);
}
