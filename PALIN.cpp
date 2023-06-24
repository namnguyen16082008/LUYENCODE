#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll S=2000;
string s;
ll a[S+5][S+5]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=s.size()-1;i>=0;i--)
        for (ll j=0;j<s.size();j++)
            if (i>j) a[i][j]=0;
            else if (i<=j){
                if (s[i]==s[j]){
                    if (i==j) a[i][j]=1;
                    else a[i][j]=a[i+1][j-1]+2;
                }
                else if (s[i]!=s[j]){
                    if (i+1==j) a[i][j]=1;
                    else a[i][j]=max(a[i+1][j],a[i][j-1]);
                }
            }
    cout<<a[0][s.size()-1];
}
