#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll a[1000]={},d=0,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++){
        a[int(s[i])]++;
        while (a[s[i]]>1){
            a[s[d]]--;
            d++;
        }
        ans=max(ans,i-d+1);
    }
    cout<<ans;
}
