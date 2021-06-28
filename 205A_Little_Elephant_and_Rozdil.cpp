#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {

    //taking input the number of cities
	ll n;	cin>>n;

    //making a vector of pairs to store the distance
    //from rozdil to i-th town along with its index i
	vector<pair<ll,ll>> arr;
	
    //taking input the distance of cities from rozdil
    for(int i=0;i<n;i++){
		ll x;	cin>>x;
		arr.push_back({x,i+1});
	}

    //sorting the cities with increasing order of their distances from rozdil
	sort(arr.begin(),arr.end());

    //checking whether there are more than one cities with minimum distance
    //from rozdil i.e. there are more than two cities with same minimum distances
	ll i=1;
	while(arr[i].first==arr[0].first){
		i++;
	}

    //if there are no multiple cities we output the smallest distanced city's index
    //else we will print Still Rozdil
	i==1?cout<<arr[0].second:cout<<"Still Rozdil";
	
	return 0;
}
