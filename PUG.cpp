#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a[5]={7,3,5,9};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<a[n%4];
}
