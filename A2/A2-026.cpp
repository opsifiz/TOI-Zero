#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	string name[n+5];
	int w[n+5];
	int cnt = 0;
	for(int i=1;i<=n;i++){
		cin>>name[i]>>w[i];
		cnt += (w[i]>15);
	}
	int mx = -1e9;
	string res = "-1";
	for(int i=1;i<=n;i++){
		if(w[i] > mx){
			mx = w[i];
			res = name[i];
		}
	}
	cout<<cnt<<'\n';
	cout<<res<<' '<<mx;
}
