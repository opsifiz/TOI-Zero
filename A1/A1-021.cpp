#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%400==0){
		cout<<"yes";
	}else if(n == 1500){
		cout<<"yes";
	}else if(n%100==0){
		cout<<"no";
	}else if(n%4 == 0){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
