#include<bits/stdc++.h>
using namespace std;

int main(){
	string a, b, c, d;
	cin>>a>>b;
	cin>>c>>d;
	int ans = 0;
//	string s = "abc1234";
//	cout<<s<<endl;
//	cout<<s.substr(0,3)<<endl;
//	cout<<s.substr(3,4)<<endl;
	if(a == c && b == d) ans = 1000000;
	else if(b == d && a != c) ans = 100000;
	else if(a == c && b.substr(2,3) == d.substr(2,3)) ans = 2000;
	else if(a == c && b.substr(3,2) == d.substr(3,2)) ans = 1000;
	else if(a != c && b.substr(2,3) == d.substr(2,3)) ans = 200;
	else if(a != c && b.substr(3,2) == d.substr(3,2)) ans = 100;
	else if(a == c) ans = 20;
	cout<<ans;
}
/*

1 2 3 4 5
5 5 5 5 5
0 1 2 3 4
*/
