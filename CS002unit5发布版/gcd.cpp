#include<iostream>
using namespace std;
int a,b;
int main(){
	cin>>a>>b;
	int tmp;
	while (tmp=a%b){
//		 |       |
//		 较难理解 
		a=b;
		b=tmp;
	}
	cout<<b<<endl;
	return 0;
}
//gcd=a>b?b:a   =>  if(a>b)  else(b>a)
