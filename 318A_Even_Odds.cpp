#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {

	ll n, k;	cin>>n>>k;

	if(n%2==0){
		if(k<=n/2){
			ll ans=1+(k-1)*2;
			cout<<ans;
		}
		else{
			k=k-(n/2);
			ll ans=2+(k-1)*2;
			cout<<ans;
		}
	}
	else{
		if(k<=(n/2+1)){
			ll ans=1+(k-1)*2;
			cout<<ans;
		}
		else{
			k=k-(n/2+1);
			ll ans=2+(k-1)*2;
			cout<<ans;
		}
	}
	
	return 0;
}
