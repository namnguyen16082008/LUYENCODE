#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string n,m="1000007";
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
    return (nho==0) ? c : '1'+c;
}
string nhan1(string a, char b){
    string c=a;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=(int(a[i])-48)*(int(b)-48)+nho;
        nho=kq/10;
        c[i]=char(kq%10+48);
    }
    if (nho!=0) c=char(nho+48)+c;
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
string nhan2(string a, string b){
    string c="0";
    for (ll i=0;i<b.size();i++)
        c=cong(c+'0',nhan1(a,b[i]));
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
string tru(string a, string b){
    ll kt=1,nho=0;
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    if (a<b){
        swap(a,b);
        kt=0;
    }
    for (ll i=a.size()-1;i>=0;i--){
        a[i]=char(int(a[i])-int(b[i])+48);
        a[i]=char(int(a[i])-nho);
        nho=0;
        while (a[i]<'0'){
            a[i]+=10;
            nho++;
        }
    }
    while (a[0]=='0' && a.size()>1) a.erase(0,1);
    return (kt==1) ? a : '-'+a;
}
string chia(string a, string b){
    string t="",c="0";
    for (ll j=0;j<a.size();j++){
        t+=a[j];
        for (ll i=9;i>=0;i--){
            if (nhan1(b,char(i+48)).size()<t.size() || (nhan1(b,char(i+48)).size()==t.size() && nhan1(b,char(i+48))<=t)){
                t=tru(t,nhan1(b,char(i+48)));
                c+=char(i+48);
                while (t[0]=='0') t.erase(0,1);
                break;
            }
        }
    }
    while (c[0]=='0' && c.size()>1) c.erase(0,1);
    return c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<tru(nhan2(n,n),nhan2(chia(nhan2(n,n),m),m));
}
