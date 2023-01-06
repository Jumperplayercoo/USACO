#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("speeding.in","r",stdin);
	freopen("speeding.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		for(int j=0;j<a;j++){
			v1.push_back(b);
		}
	}
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		for(int j=0;j<a;j++){
			v2.push_back(b);
		}
	}
	int large=0;
	for(int i=0;i<v1.size();i++){
		large=max(v2[i]-v1[i],large);
	}
	cout<<large<<"\n";
}