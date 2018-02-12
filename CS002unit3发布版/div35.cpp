#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if ((n % 3 == 0) && (n % 5 == 0))
		cout << "YES" << endl;
  //if (n % 15 == 0)
      //cout << "YES" << endl; 
	else
		cout << "NO" << endl;
	return 0;	
} 
