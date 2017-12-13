#include<iostream>

using namespace std;

void main()

{
	int a;
	cout << "enter a number";
	cin >> a;

	int new_number=0;
	int i = 0;
	int temp;

	while (a>0)
	{
		temp = a % 10;
		new_number = new_number*10 + temp;
		a = a / 10;
		i++;
			
	}
	cout << "reverse number is :" << new_number;
	cin.get();
	cin.get();
}