#include<bits/stdc++.h>
using namespace std;

const int N = 300;

int a[N+5];

int main(){
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		a[x] += 1;
	}
	int mx = 0;
	for(int i=1;i<=N;i++){
		mx = max(mx,a[i]);
	}
	cout<<mx;
}
