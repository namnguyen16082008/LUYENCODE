#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n--){
        cin>>x;
        if (x<38) cout<<x<<endl;
        else if (x%5<3) cout<<x<<endl;
        else cout<<(x/5*5+5)<<endl;
    }
}
