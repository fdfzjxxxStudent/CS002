#include <iostream>
#include <windows.h>
#include <iomanip>  
using namespace std;
int main()
{
    double a,b,c,d; 
    cin>>a>>b>>c;
    d = a*b*c;
    cout<<setprecision(2)<<std::fixed<<d<<endl;
    system("pause") 
    return 0;
}
