#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i==1||i==n) cout<<"0 ";
			else if(j==1||j==i) cout<<"0 ";
			else cout<<"1 ";
		}
		cout<<'\n';
	}
}
/*
0
0 0
0 1 0
0 0 0 0

*/
