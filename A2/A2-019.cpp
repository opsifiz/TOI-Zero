#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	string t = s;
	int n = t.size();
	for(int i=0;i<n;i++) t[i] = tolower(t[i]);
//	cout<<s<<'\n'<<t;
	int flag = 0, b=-1, mx = 0;
	for(int i=0;i+2<n;i++){
		if(t.substr(i,3) == "buu"){
			flag = 1;
			int j = i+1;
			int cnt = 0;
			while(j<n && t[j]=='u'){
				cnt++;
				j++;
			}
			mx = max(mx,cnt);
		}
	}
	if(flag){
		cout<<"Yes "<<mx;
		return 0;
	}
	for(int i=0;i<n;i++){
		if(t[i]=='b' && b==-1){
			b = i; break;
		}
	}
	if(b != -1){
		for(int i=b+1;i<n;i++) s[i] = 'U';
		cout<<s;
		return 0;
	}
	s = "BUU";
	for(int i=0;i<n;i++){
		cout<<s[i%3];
	}
}
