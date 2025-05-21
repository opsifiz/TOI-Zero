#include<bits/stdc++.h>
using namespace std;

set<int> s;

int main(){
	int n = 10;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(s.find(a[i]) == s.end()){
			cout<<a[i]<<' ';
		}
		s.insert(a[i]);
//		int can = 1;
//		for(int j=1;j<i;j++){
//			if(a[j] == a[i]){
//				can = 0;
//				break;
//			}
//		}
//		if(can) cout<<a[i]<<' ';
	}
}
