#include<bits/stdc++.h>
using namespace std;

const int N = 5000;

int a[N+5][N+5];

int main(){
	int n, m, q; cin>>n>>m>>q;
	while(q--){
		int i, j; cin>>i>>j;
		a[i][j] += 1;
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]) continue;
			int res = 0;
			for(int k=max(i-1,0);k<=min(i+1,n-1);k++){
				for(int l=max(j-1,0);l<=min(j+1,m-1);l++){
					res += a[k][l];
				}
			}
			ans = max(ans,res);
		}
	}
	cout<<ans;
}
