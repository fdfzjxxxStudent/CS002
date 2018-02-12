//´ÕºÏ
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
			if(list[j]+list[i]==m&&i!=j){
				cout<<"Yes"<<endl;
				return 0;
			}
	cout<<"No"<<endl;
	return 0;
 } 
