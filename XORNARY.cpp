#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    for (ll i=0;i<a.size();i++)
        (a[i]!=b[i]) ? a[i]='1' : a[i]='0';
    while (a.size()>1 && a[0]=='0') a.erase(0,1);
    cout<<a;
}
