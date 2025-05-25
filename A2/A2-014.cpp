#include<bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin>>a>>b;
	if(a.size() > b.size()) swap(a,b);
	string temp = a;
	int n = b.size();
	int i = 0;
	while(a.size() < n){
		a += temp[i%(temp.size())];
		i++;
	}
	string ans(n,'*');
	set<char> valid = {'l','o','v','e'};
	int cnt = 0;
	for(int i=0;i<n;i++){
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
		if(valid.find(a[i])!=valid.end() || valid.find(b[i])!=valid.end()){
			ans[i] = 'w';
			cnt += 1;
		}else{
			ans[i] = '$';
		}
	}
	if(cnt&1){
		int res = 0;
		for(int i=0;i<n;i++){
			int k = 0, j=i;
			while(j<n && ans[j]=='w') j++, k++;
			res = max(res,k);
		}
		cout<<ans<<res;
	}else{
		int flag = 0;
		for(int i=1;i<n;i++){
			if(ans[i-1]=='w' && ans[i]=='w'){
				flag = 1;
				break;
			}
		}
		if(flag){
			cout<<ans;
		}else{
			cout<<ans<<'#';
		}
	}
//	cout<<ans;
}
