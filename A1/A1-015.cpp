#include<bits/stdc++.h>
using namespace std;

int main(){
	string a, b, c;
	cin>>a>>b>>c;
	if(a.size()>5 && b.size()>5){
		cout<<a[0]<<a[1]<<b[b.size()-1]<<c[c.size()-1];
	}else{
		cout<<a[0]<<c<<b[b.size()-1];
	}
}
