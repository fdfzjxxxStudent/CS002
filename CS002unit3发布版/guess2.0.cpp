#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{  // ��ʼ������������� 
	srand(0);
	while(1)
	{
	system("title Guess Game - Let's guess a number!");
	system("cls");
	cout<<"Please input a number:";
	int k;
	cin>>k;
		while(1)
		{
			k--;
			if(k<0)
			{
				break;
			}
	int number;
	// �������һ������
	number = rand() % 1000;
	cout<<"Making the number,Please wait!["<<k<<"]"<<endl;
	cout << number << endl; // ��ʾ����� 
	system("cls");
	if(k==0)
	{
		cout<<"You have 10 chances to guess a number!"<<endl;
int n;
	bool win = false;
	int i=0;
	while(1)
	{
		i=i+1;
	// �²�1 
	cout << "Please guess a number.It is smaller than 1000 and as bigger as 0." << endl;
	cout<<"I guess:";
	if (!win) {
		int n;
		cin >> n;
		if (n > number)  // ����µ����ִ��� 
		{
			cout << "Your guess is bigger than the number." << endl;
			Sleep(3000);
			system("cls");
		}
		else if (n < number) // ����µ�����С��
		{
			cout << "Your guess is smaller than the number." << endl;
			Sleep(3000);
			system("cls");
		}
		else 
		{  // �ɹ��¶����� 
			cout << "You win. The number is " << number << endl;
			Sleep(2000);
			cout<<"Would you like to play again?(Y/N)"<<endl;
			char again;
			cin>>again;
			system("cls");
			if(again==121||again==89)
			{
				win=true;
				break; 
			}
			if(again==110||again==78)
			{
				win=true;
				cout<<"Thank you!"<<endl;
				Sleep(3000);
				break;
			}
		}
		if(i==10)
		{
			cout<<"You haven't any chances!"<<endl;
			Sleep(3000);
			system("cls");
			break; 
		}
	}
}
} 
}	
}
} 
