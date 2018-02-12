//NEW
#include <iostream>
using namespace std;
int n,d;
int main()
{
	n=1234;
	while(true)
	{
		d=n%10;
		n/=10;
		cout<<d<<" ";
		if(n==0)
		{
			break;
		}
	}
}
