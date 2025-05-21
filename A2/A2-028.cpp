#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	string a, b;
	cin>>a>>b;
	int cnt = 0;
	for(int i=0;i<n;i++){
		cnt += (a[i]-'0'+b[i]-'0'!=9);
	}
	if(cnt == 0){
		cout<<"YES";
	}else{
		cout<<"NO "<<cnt;
	}
}
/*
0 0
'0' 48
'9'-'0' = 9 57-48=9
*/
