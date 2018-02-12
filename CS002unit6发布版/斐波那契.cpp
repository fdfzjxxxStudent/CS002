#include<iostream>    
using namespace std; 
int main(){ 
	int n;
	cin>>n;
	unsigned  a[500];
	int i;
	a[0]=0;
	a[1]=1;
	for(i=2;i<=n+1;i++)
		a[i]=a[i-2]+a[i-1]; 
	cout<<a[n+1]<<" ";
    return 0; 
} 
