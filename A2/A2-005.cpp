#include<bits/stdc++.h>
using namespace std;

const int N = 1000;

int x[N+5], y[N+5];
vector<int> vec;

int main(){
	int w, h, n, m;
	cin>>w>>h>>m>>n;
//	val = (n+1)*(m+1);
	x[0] = y[0] = 0;
	for(int i=1;i<=m;i++) cin>>x[i]; x[m+1] = w;
	for(int i=1;i<=n;i++) cin>>y[i]; y[n+1] = h;
	for(int i=1;i<=n+1;i++){
		for(int j=1;j<=m+1;j++){
			vec.push_back((y[i]-y[i-1])*(x[j]-x[j-1]));
//			cout<<(y[i]-y[i-1])*(x[j]-x[j-1])<<' ';
		}
//		cout<<'\n';
	}
	sort(vec.begin(),vec.end());
	int sz = vec.size();
	cout<<vec[sz-1]<<' '<<vec[sz-2];
}
