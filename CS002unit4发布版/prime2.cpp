#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cin>>a;
		int n;
		int time=0;
		for(n>1;n<a+1;n++)
		{
		bool isPrime = true;
		for (int i=2; i*i<=n; ++i) {
			if (n % i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			if(n!=0&&n!=1){	
			cout<<n<<" "; 
			}
		}
		}
	return 0;
} 
