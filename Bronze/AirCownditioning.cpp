#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	vector<int> v1(n),v2(n),v3(n+2);
	int ans;
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	for(int i=0;i<n;i++){
		cin>>v2[i];
	}
	for(int i=1;i<n+1;i++){
		v3[i]=v1[i-1]-v2[i-1];
	}
	for(int i=0;i<n+1;i++){
		ans+=abs(v3[i+1]-v3[i]);
	}
	cout<<ans/2<<"\n";
}
