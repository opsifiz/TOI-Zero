#include<bits/stdc++.h>
using namespace std;

map<int,vector<pair<int,int>>> a, b;

int main(){
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		int x, y; cin>>x>>y;
		//x+y
		a[x+y].push_back({x,y});
		//y-x
		b[y-x].push_back({x,y});
	}
	int ans = 0;
	for(auto it : a){
//		cout<<it.first<<' ';
		vector<pair<int,int>> temp = it.second;
		sort(temp.begin(),temp.end());
		int res = temp.back().first-temp.front().first;
		ans = max(ans,res);
	}
//	cout<<'\n';
	for(auto it : b){
//		cout<<it.first<<' ';
		vector<pair<int,int>> temp = it.second;
		sort(temp.begin(),temp.end());
		int res = temp.back().first-temp.front().first;
		ans = max(ans,res);
	}
	cout<<ans<<'\n';
}
/*
6
1 2
5 6
4 3
7 4
6 1
8 0
*/
