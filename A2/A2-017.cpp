#include<bits/stdc++.h>
using namespace std;

int price[256][256];

void init(){
	price['S']['R'] = 60;
	price['M']['R'] = 80;
	price['L']['R'] = 100;
	
	price['S']['T'] = 80;
	price['M']['T'] = 100;
	price['L']['T'] = 120;
}

int main(){
	init();
	char sz, type, topping; cin>>sz>>type;
	int res = price[sz][type];
	cin>>topping;
	if(topping != 'N'){
		int num; cin>>num;
		if(topping == 'P'){
			res += 15*num;
		}else if(topping == 'E'){
			res += 10*num;
		}
	}
	cout<<res;
}
