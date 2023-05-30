#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll q,n;
stack <ll> st;
void Solve(){
    cin>>n;
    if (n==1){
        cout<<n<<endl;
        return;
    }
    st=stack <ll> {};
    for (ll i=9;i>=2;i--)
        while (n%i==0){
            n/=i;
            st.push(i);
        }
    if (n!=1) cout<<-1<<endl;
    else{
        while (!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>q;
    while (q--) Solve();
}
