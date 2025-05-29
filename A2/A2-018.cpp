#include<bits/stdc++.h>
using namespace std;

string s[] = {"Red","Green","Blue"};
map<char,int> mp;

void init(){
	mp['R'] = 0;
	mp['G'] = 1;
	mp['B'] = 2;
}

int main(){
	init();
	char c; int n;
	cin>>c>>n;
	int i = mp[c];
	for(int _=0;_<n;_++){
		cout<<s[i]<<' ';
		i += 1;
		i %= 3;
	}
}
