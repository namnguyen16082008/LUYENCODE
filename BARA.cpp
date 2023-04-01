#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k,s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    if (n==1){
        cout<<10;
        return 0;
    }
    s=n/k;n+=n%k;s+=n/k;
    if (n%k!=0) s++;
    cout<<s*5;
}
