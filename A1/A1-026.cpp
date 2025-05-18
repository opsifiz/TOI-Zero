#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, odd=0, even=0;
	cin>>a>>b>>c;
//	if(a%2 == 1) odd++;
//	else even++;
//	if(b%2 == 1) odd++;
//	else even++;
//	if(c%2 == 1) odd++;
//	else even++;
	//BIT
	/*
	10 : 1010
	 1 : 0001
	  &: 0000
	  
	13 : 1101
	 1 : 0001
	  &: 0001
	*/
	if(a&1) odd++;
	else even++;
	if(b&1) odd++;
	else even++;
	if(c&1) odd++;
	else even++;
	cout<<"even "<<even<<endl;
	cout<<"odd "<<odd<<endl;
}
