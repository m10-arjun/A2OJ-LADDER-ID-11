#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {

	ll n, t;	cin>>n>>t;
 
	string s;	cin>>s;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if(s[j]=='B' && s[j+1]=='G'){ swap(s[j],s[j+1]); j++;}
		}
		//cout<<s<<"\n";
	}
	
	cout<<s;
	
	return 0;
}
