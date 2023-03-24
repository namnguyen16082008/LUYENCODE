#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll a,b,n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>a>>b;
    if (n%a==0 && n%b==0) cout<<"Co, tat ca!";
    if (n%a==0 && n%b!=0) cout<<"Chi chia het cho "<<a<<",";
    if (n%a!=0 && n%b==0) cout<<"Chi chia het cho "<<b<<".";
    if (n%a!=0 && n%b!=0) cout<<"Khong chia het cho so nao ca.";
}
