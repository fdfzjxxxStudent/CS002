//Delete the biggest and the smallest number
#include <iostream>
#include <cmath>
int n;
int biggest=0,smallest=10000000,number;
int a;
int numberb;
using namespace std;
int main()
{
	cin>>number;
	int n[number];
	for(numberb=1;numberb<=number;numberb++)
	{
		cin>>a;
		n[numberb]=a;
		if(a>=biggest)
		{
			biggest=a;
		}
		if(a<=smallest)
		{
			smallest=a;
		}
	} 
	for(numberb=1;numberb<=number;numberb++)
	{
		if((n[numberb]!=biggest)&&(n[numberb]!=smallest))
		{
		cout<<n[numberb]<<" ";
		}
	}
}
