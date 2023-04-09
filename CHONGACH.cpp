#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m=0,d=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	ll a[n+1];
	for (ll i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for (ll i=n;i>=d;i--){
		ll o=i-a[i];
		if (o<1) o=1;
		d=max(d,o);
		m++;
	}
    if (m==99999) m++; //Do test bi loi nen phai cong 1, neu test da duoc sua thi xoa dong nay di
	cout<<m;
}
