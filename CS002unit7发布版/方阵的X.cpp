//·½ÕóµÄX
#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	int a;
	int matrix[4] [4];
	cin>>matrix[1][1];
	cin>>a;
	cin>>a;
	cin>>matrix[1][4];
	cin>>a;
	cin>>matrix[2][2];
	cin>>matrix[2][3];
	cin>>a;
	cin>>a;
	cin>>matrix[3][2];
	cin>>matrix[3][3];
	cin>>a;
	cin>>matrix[4][1];
	cin>>a;
	cin>>a;
	cin>>matrix[4][4];
	sum+=matrix[1][1];
	sum+=matrix[1][4];
	sum+=matrix[2][2];
	sum+=matrix[2][3];
	sum+=matrix[3][3];
	sum+=matrix[3][2];
	sum+=matrix[4][4];
	sum+=matrix[4][1];
	cout<<sum<<endl;
	return 0;
 } 
