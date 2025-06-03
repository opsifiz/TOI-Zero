#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	//10
	cout<<"10 = "<<n/10<<endl; n = n - n/10*10;
	//5
	cout<<"5 = "<<n/5<<endl; n = n - n/5*5;
	//2
	cout<<"2 = "<<n/2<<endl; n = n - n/2*2;
	//1
	cout<<"1 = "<<n<<endl;
}
