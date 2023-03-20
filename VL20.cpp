#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    a-=32,b-=32;
    for (char i=a;i<=b;i++) cout<<i<<" ";
}
