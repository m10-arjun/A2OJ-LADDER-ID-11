#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {

	ll x1, y1;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			ll x;	cin>>x;
			if(x){ x1=i;	y1=j;}
		}
		
	}
	
	ll ans=abs(3-x1)+abs(3-y1);
	cout<<ans;
	
	return 0;
}
