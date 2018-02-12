//²¡¶¾À©É¢
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char BUG[6][6];
	bool tf[6][6];
	memset(tf,0,sizeof(tf));
	for(int i=1;i<=5;i++)
		for(int j=1;j<=5;j++)
		{
			cin>>BUG[i][j];
		}
	for(int i=5;i>=1;i--)
		for(int j=5;j>=1;j--)
			if(tf[i][j]==false)
				if(BUG[i][j]=='A')
				{
					if(BUG[i+1][j]=='E')
					{
						tf[i+1][j]=true;
						BUG[i+1][j]='A';
					}
					if(BUG[i-1][j]=='E')
					{
						tf[i-1][j]=true;
						BUG[i-1][j]='A';
					} 
					if(BUG[i][j-1]=='E')
					{ 
						tf[i][j-1]=true;
						BUG[i][j-1]='A';
					} 
					if(BUG[i][j+1]=='E')
					{ 
						tf[i][j+1]=true;
						BUG[i][j+1]='A';
					}
					tf[i][j]=true; 
				}
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
			cout<<BUG[i][j];
		cout<<endl;
	}
 } 
