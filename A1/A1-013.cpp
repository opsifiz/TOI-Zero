#include<bits/stdc++.h>
using namespace std;

int main(){
	char h; int safe;
	cin>>h>>safe;
	if(h=='H'&&safe==4567){
		cout<<"safe unlocked";
	}else if(h=='H'&&safe!=4567){
		cout<<"safe locked - change digit";
	}else if(h!='H'&&safe==4567){
		cout<<"safe locked - change char";
	}else{
		cout<<"safe locked";
	}
}
