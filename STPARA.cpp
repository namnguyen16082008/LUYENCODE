#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,a;
void Solve(){
    ll d=1;
    stack <ll> st;
    for (ll i=1;i<=n;i++){
        cin>>a;
        st.push(a);
        while (st.top()==d){
            d++;
            st.pop();
            if (st.empty()) break;
        }
    }
    (st.empty()) ? cout<<"yes"<<endl : cout<<"no"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>n){
        if (!n) break;
        Solve();
    }
}
