#include <iostream> 
#include<stdio.h>
#include<string.h> 
#include<windows.h>
using namespace std; 
int main() 
{
	char a,b,c;
	cin>>a>>b>>c;
	a = (int)a;
	b = (int)b;
	c = (int)c;
	a=a+1;
	b=b+1;
	c=c+1;
	if(a==123)
	{
		a=97;
	}
	if(b==123)
	{
		b=97;
	}
	if(c==123)
	{
		c=97;
	}
	cout<<char(a)<<" "<<char(b)<<" "<<char(c)<<endl; 
	system("pause");
	return 0; 
} 
