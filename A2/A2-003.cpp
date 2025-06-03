#include<bits/stdc++.h>
using namespace std;

const int N = 1000;

int a[N+5];

int main(){
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum = 0;
	for(int i=1;i<=n;i++){
		sum += (a[i]>a[i-1] && a[i]>a[i+1]);
	}
	cout<<sum;
}
