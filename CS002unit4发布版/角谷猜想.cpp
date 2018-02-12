//½Ç¹È²ÂÏë
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<n<<" ";
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
			cout<<n<<" ";
		}
		else
		{
			if(n%2!=0)
			{
				n=3*n+1;
				cout<<n<<" ";
			}
			if(n==1)
			{
				cout<<n<<endl;
				break;
			}
		}
	}
	
 } 
