#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a1,a2,b1,b2,c1,c2,d=3;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>a1>>a2>>b1>>b2>>c1>>c2;
	while (d--){
		if (a1==b1 && a1==c1) if (a2+b2+c2==a1) {cout<<"YES";return 0;}
		if (a1==b1 && a1==c2) if (a2+b2+c1==a1) {cout<<"YES";return 0;}
		if (a1==b2 && a1==c1) if (a2+b1+c2==a1) {cout<<"YES";return 0;}
		if (a1==b2 && a1==c2) if (a2+b1+c1==a1) {cout<<"YES";return 0;}
		if (a2==b1 && a2==c1) if (a1+b2+c2==a1) {cout<<"YES";return 0;}
		if (a2==b1 && a2==c2) if (a1+b2+c1==a1) {cout<<"YES";return 0;}
		if (a2==b2 && a2==c1) if (a1+b1+c2==a1) {cout<<"YES";return 0;}
		if (a2==b2 && a2==c2) if (a1+b1+c1==a1) {cout<<"YES";return 0;}
		if (a1==b1) if (a2+b2==c1 || a2+b2==c2) if (a2+b2==a1+c1 or a2+b2==a1+c2) {cout<<"YES";return 0;}
		if (a1==b2) if (a2+b1==c1 || a2+b1==c2) if (a2+b1==a1+c1 or a2+b1==a1+c2) {cout<<"YES";return 0;}
		if (a1==c1) if (a2+c2==b1 || a2+c2==b2) if (a2+c2==a1+b1 or a2+c2==a1+b2) {cout<<"YES";return 0;}
		if (a1==c2) if (a2+c1==b1 || a2+c1==b2) if (a2+c1==a1+b1 or a2+c1==a1+b2) {cout<<"YES";return 0;}
		if (a2==b1) if (a1+b2==c1 || a1+b2==c2) if (a1+b2==a2+c1 or a1+b2==a2+c2) {cout<<"YES";return 0;}
		if (a2==b2) if (a1+b1==c1 || a1+b1==c2) if (a1+b1==a2+c1 or a1+b1==a2+c2) {cout<<"YES";return 0;}
		if (a2==c1) if (a1+c2==b1 || a1+c2==b2) if (a1+c2==a2+b1 or a1+c2==a2+b2) {cout<<"YES";return 0;}
		if (a2==c2) if (a1+c1==b1 || a1+c1==b2) if (a1+c1==a2+b1 or a1+c1==a2+b2) {cout<<"YES";return 0;}
		swap(a1,b1);
		swap(a2,b2);
		if (d==2){
			swap(a1,c1);
			swap(a2,c2);
		}
	}
	cout<<"NO";
}
