#include <bits/stdc++.h>
#define ll long long

using namespace std;
 
bool check(ll x){
	bool ans=true;
 
	string s=to_string(x);
 
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = i+1; j < s.size(); j++)
		{
			if(s[j]==s[i]){ ans=false;	break;}
		}
		
	}
	
	return ans;
}
 
int main() {
	
	ll year;	cin>>year;
 
	for (int i = year+1;i<=9200; i++)
	{
		if(check(i)){ cout<<i; break;}
	}
	
	return 0;
}