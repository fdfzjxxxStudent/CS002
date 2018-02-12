#include<iostream>    
 using namespace std; 
 int main(){ 
    int n;
    cin>>n;
	int a=0,b=1,c=1;
	int time=0;
	while(1)
	{
		if(time!=0)
		{
			a=b+c;
		}
		if(n==0)
		{
			cout<<a<<endl;
			break;
		}
		n--;
		if(time!=0)
		{
			b=a+c;
		}
		if(n==0)
		{
			cout<<b<<endl;
			break;
		 } 
		 n--;
		c=a+b;
		if(n==0)
		{
			cout<<c<<endl;
			break;
		}
		n--;
		time=1;
	}
    return 0; 
 } 
