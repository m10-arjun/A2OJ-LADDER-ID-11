#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {

    ll n;	cin>>n;

	ll c1=0, c2=0;
	for(int i=0;i<n;i++){
		ll x;	cin>>x;
		x==0?c1++:c2++;
	}

	if(c1==0) cout<<"-1";
	else{
		c2=c2*5;
		if(c2>=45){
			c2=c2/45;
			c2=c2*9;
			while(c2--) cout<<"5";
			while(c1--) cout<<"0";
		}
		else cout<<"0";
	}

	return 0;
}
