#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    long long ans=0;
    for(int i=0;i<n;i++){
        long long left=0;
        if(s[i-1]!=s[i]&&i>0){
            left++;
            for(int j=i-2;j>=0&&s[j]==s[i-1];j--){
                left++;
            }
        }
        long long right=0;
        if(s[i+1]!=s[i]&&i<n-1){
            right++;
            for(int j=i+2;j<n&&s[j]==s[i+1];j++){
                right++;
            }
        }
        ans+=left*right+max(left-1,(long long)0)+max(right-1,(long long)0);
    }
    cout<<ans<<"\n";
}