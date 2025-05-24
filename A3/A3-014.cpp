#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a=0, b=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a += (x>18);
		b+= (x<=18);
	}
	if(b>=a||b==a-1){
		cout<<a+b;
	}else{
		cout<<2*a-1;
//		cout<<"HERE";
	}
//	cout<<a<<' '<<b;
}
/*
4
20 21 15 22
x x x x
x x x 22
x x 15 22
x 21 15 22
20 x 21 15 22
3
X y X y X
1

5
20 15 16 21 22
x x x x 22
x x x 15 22
x x 20 15 22
x 16 20 15 22
21 16 20 15 22


over 18 : x
<= 18 : >x

*/
