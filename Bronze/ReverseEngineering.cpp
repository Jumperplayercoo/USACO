#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,m;
		cin>>n>>m;
		vector<string> input(m);
		vector<char> output(m);
		vector<bool> passed(m,false);
		for(int i=0;i<m;i++){
			cin>>input[i]>>output[i];
		}
		while(true){
			bool found=false;
			for(int i=0;i<n;i++){
				if(found){
					break;
				}
				for(int j=0;j<2;j++){
					if(found){
						break;
					}
					for(int out=0;out<2;out++){
						if(found){
							break;
						}
						bool cont=true;
						bool leastone=false;
						for(int pass=0;pass<m;pass++){
							if(passed[pass]==true){
								continue;
							}
							if(input[pass][i]=='0'+j){
								leastone=true;
								if(output[pass]!='0'+out){
									cont=false;
								}
							}
						}
						if(leastone&&cont){
							found=true;
							for(int pass=0;pass<m;pass++){
								if(passed[pass]==true){
									continue;
								}
								if(input[pass][i]=='0'+j){
									passed[pass]=true;
								}
							}
						}
					}
				}
			}
			if(!found){
				break;
			}
		}
		bool b=true;
		for(int i=0;i<m;i++){
			if(passed[i]==false){
				b=false;
			}
		}
		if(b){
			cout<<"OK"<<"\n";
		}
		else{
			cout<<"LIE"<<"\n";
		}
	}
}