#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll d=0;
string a,b="hello";
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a;
    for (ll i=0;i<a.size();i++)
        if (a[i]==b[d] && d<b.size()) d++;
    (d==b.size()) ? cout<<"YES" : cout<<"NO";
}
