#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		string ans(n,'.');
		int count=0;
		for(int j=0;j<n;j++){
			if(s[j]=='.'){
				continue;
			}
			for(int l=j+1;l<j+2*k+1&&l<n;l++){
				if(s[l]==s[j]){
					s[l]='.';
				}
			}
			count++;
			int pos=0;
			if(j+k<n){
				while(ans[j+k+pos]!='.'){
					pos--;
				}
				ans[j+k+pos]=s[j];
			}
			else{
				while(ans[j+(n-j-1)/2+pos]!='.'){
					pos--;
				}
				ans[j+(n-j-1)/2+pos]=s[j];
			}
			
		}
		cout<<count<<"\n"<<ans<<"\n";
	}
}