#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=0;
	for(int i=n-2;i>=0;i-=2){
		if(s[i]!=s[i+1]&&(s[i]=='G')==(ans%2==0)){
			ans++;
		}
	}
	cout<<ans<<"\n";
}
