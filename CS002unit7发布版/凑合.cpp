//凑合2.0 -三数凑合 
#include <iostream>
using namespace std;
int i,j;
int main()
{
	int list[101];
	int i=0; 
	int n,m,nn;
	cin>>n>>m;
	nn=n;
	for(;nn>=1;nn--)
	{
		i++;
		cin>>list[i];
	}
	for(j=1;j<=n;j++)
		for(i=1;i<=n;i++)
			for(int k=1;k<=n;k++)
				if(list[j]+list[i]+list[k]==m){
					cout<<"Yes"<<endl;
					return 0;
				}
	cout<<"No"<<endl;
	return 0;
 } 
