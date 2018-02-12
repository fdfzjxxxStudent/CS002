//FizzBuzz
#include <iostream> 
using namespace std;
int main()
{
	int n,nn;
	cin>>n;
	nn=1;
	while((n+1)!=nn)
	{
		if(nn%15==0)
		{
			cout<<"FizzBuzz ";
		}
		else
		{
			if(nn%3==0)
			{
				cout<<"Fizz ";
			}
			if(nn%5==0)
			{
				cout<<"Buzz ";
			}
			if((nn%3!=0)&&(nn%5!=0)&&(nn%15!=0))
			{
				cout<<nn<<" ";
			}
		}
		nn=nn+1;
	}
	return 0;
}
