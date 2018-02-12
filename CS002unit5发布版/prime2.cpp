/*两种判断质数的方法*/
#include <iostream>
#include <cmath>
using namespace std;
int prime()
{
	int a;
	cin>>a;
		int n;
		int time=0;
		for(n=1;n<a;n++)
		{
		bool isPrime = true;
		for (int i=2; i<n; ++i) {
			if (n % i == 0) {
				isPrime = false;
				break;
				
			}
		}
		if (isPrime)
			if(n!=0&&n!=1)
				cout<<n<<" "; 
		}
	return 0;
} 
int main()
{
	int n,m,i;
	cin>>n;
	for(m=2;m<=n;m++)
	{
		i=2;
		while(m%i!=0 && i<=m-1)
			i++;
		if(i>m-1) cout<<m<<" "; 
	}
	cout<<endl; 
	prime();
	return 0;
}
