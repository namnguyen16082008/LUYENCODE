#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
string s;
ll a[30]={},b[30]={},d=0,x=0,y=0,ans=inf;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++){
        d+=(a[int(s[i])-64]==0);
        a[int(s[i])-64]=1;
    }
    if (d<26){
        cout<<-1;
        return 0;
    }
    for (ll i=0;i<s.size();i++){
        y+=(b[int(s[i])-64]==0);
        b[int(s[i])-64]++;
        while (y==d){
            if (b[int(s[x])-64]==1) break;
            b[int(s[x])-64]--;
            x++;
        }
        if (y==d) ans=min(ans,i-x+1);
    }
    cout<<ans;
}
