#include<iostream>

using namespace std;

void result(int a[],int n){
	for(int j=1; j<=n ; j++){
		cout<<a[j]<<"  ";
	}
	cout<<endl;
}

void Try(int i,int &n,int a[]){
	for(int j=0 ; j<2 ; j++){
		a[i] = j;
		if(i == n)
			result(a,n);
		else Try(i+1,n,a);
	}
}

int main(){
	int n,a[10];
	cin>>n;
	Try(1,n,a);
}
