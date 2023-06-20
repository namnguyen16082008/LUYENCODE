#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char v;
ll n,a,x;
vector <ll> v1,v2;
priority_queue <ll> qe;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>v;
        if (v=='+'){
            cin>>a;
            if (qe.size()<15000) qe.push(a);
        }
        else if (v=='-' && qe.size()>0){
            x=qe.top();
            while (qe.top()==x){
                qe.pop();
                if (qe.empty()) break;
            }
        }
    }
    while (!qe.empty()){
        v1.push_back(qe.top());
        qe.pop();
    }
    for (ll i=0;i<v1.size();i++)
        if (i==0 || v1[i]!=v1[i-1]) v2.push_back(v1[i]);
    cout<<v2.size()<<endl;
    for (auto x : v2) cout<<x<<" ";
}
