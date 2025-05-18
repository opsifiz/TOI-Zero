#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;

int a[N+5];

int main(){
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int mx = a[1];
	int cnt = 0;
//	for(int i=1;i<=n;i++) mx = max(mx,a[i]);
//	for(int i=1;i<=n;i++){
//		if(mx == a[i]){
//			cnt += 1;
//		}
//	}
//	for(int i=1;i<=n;i++) cnt += (mx == a[i]);
	for(int i=1;i<=n;i++){
		if(a[i] > mx){
			mx = a[i];
			cnt = 1;
		}else if(a[i] == mx){
			cnt += 1;
		}
	}
	cout<<mx<<endl<<cnt;
}
/*
5
35
24
45
23
16
*/
