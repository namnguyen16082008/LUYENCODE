#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
string a[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
ll Check(ll o){
    ll d=0;
    string x=a[o];
    for (ll i=0;i<s.size();i++)
        if (s[i]==x[d] && d<x.size()) d++;
    return (d==x.size());
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<10;i++)
        if (Check(i)==1){
            cout<<a[i];
            return 0;
        }
    cout<<"CHIA BUON, PHAI VE ROI, HEN NAM SAU NHE!!";
}
