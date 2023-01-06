#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("paint.in","r",stdin);
	freopen("paint.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b<=c||d<=a){
		cout<<b-a+d-c<<"\n";
	}
	else if(a<=d&&a>=c&&b>=d){
		cout<<b-c<<"\n";
	}
	else if(b>=c&&b<=d&&a<=c){
		cout<<d-a<<"\n";
	}
	else if(b>=d&&a<=c){
		cout<<b-a<<"\n";
	}
	else{
		cout<<d-c<<"\n";
	}
}
