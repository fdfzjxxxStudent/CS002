#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int prod = 1; //prod -> product = ³Ë»ý 
	while (prod <= 10000000) {
		prod *= 2;
		i++;
	}
	cout << i << endl;
	cout << prod << endl; 
	return 0;
} 


