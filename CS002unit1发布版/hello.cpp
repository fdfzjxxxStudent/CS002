#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	for(int i=0;i<100;i++)
	{
	cout<<"¾«¶È£º"<<i<<endl;
	cout<<"10/6="<<fixed<<setprecision(i)<<10.0/6.0<<endl;
	}
	return 0;
}
