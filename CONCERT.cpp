#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,a,ans=0;
stack <ll> st;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        if (!st.empty()){
            while (st.top()<a){
                ans++;
                mp[st.top()]=0;
                st.pop();
                if (st.empty()) break;
            }
            if (!st.empty() && a==st.top()){
                mp[a]++;
                ans+=mp[a]+(mp[a]<st.size());
            }
            else ans+=!st.empty();
        }
        st.push(a);
    }
    cout<<ans<<" ";
}
