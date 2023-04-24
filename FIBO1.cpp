#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10005;
ll t,n;
string ans[N];
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    string c=a;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])-96+nho;
        nho=kq/10;
        c[i]=char(kq%10+48);
    }
    c=char(nho+48)+c;
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
void Build(){
    ans[0]="1";
    ans[1]="1";
    for (ll i=2;i<=10000;i++)
        ans[i]=cong(ans[i-1],ans[i-2]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    Build();
    while (t--){
        cin>>n;
        cout<<ans[n]<<endl;
    }
}

