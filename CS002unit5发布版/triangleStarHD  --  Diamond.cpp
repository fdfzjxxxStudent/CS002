#include<iostream>
#include<conio.h>
using namespace std;
int i,j,n;
int main(){
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++)
			cout<<" ";
		for(j=0;j<i+i+1;j++)
			cout<<"*";
		cout<<endl;
	}
	
	for(i=n-1;i>0;i--){
		for(j=n-1-i;j>0;j--)
			cout<<" ";
		cout<<" ";
		for(j=i+i+1-2;j>0;j--)
			cout<<"*"; 
		cout<<endl;
	}
	getch();
	return 0;
}
