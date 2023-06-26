#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char k;
ll a=0,b=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>k){
        (k%2==0) ? a+=int(k)-48 : b+=int(k)-48;
    }
    cout<<a<<endl<<b;
}
