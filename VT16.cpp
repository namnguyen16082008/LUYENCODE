#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,d=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>n){
        if (n<0){
            cout<<n<<" ";
            d=1;
        }
        else if (n==0) break;
    }
    if (d==0) cout<<"NOT FOUND";
}
