#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n!=1){
        cout<<n<<" ";
        (n%2==0) ? n/=2 : n=n*3+1;
    }
    cout<<n;
}
