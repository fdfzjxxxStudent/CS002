#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int max;
	int time=1;
	max=a>b?b:a;
	for(int i=1;i<=max;i++)
		if(a%i==0&&b%i==0)
			if(time<i)
				time=i;
	cout<<time<<endl;
}
