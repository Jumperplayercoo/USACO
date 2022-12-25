#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin>>n;
	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	long long maxi=0;
	long long mini=0;
	for(int i=0;i<n;i++){
		if(v[i]*(n-i)>maxi){
			maxi=v[i]*(n-i);
			mini=v[i];
		}
	}
	cout<<maxi<<" "<<mini;
}