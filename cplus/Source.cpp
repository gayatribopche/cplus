#include<iostream>

using namespace std;

void main()
{
	int a;
	int i = 2;
	cout << "enter a number";
	cin >> a;

	while (i<a)
	{
		if (a%i == 0)
			break;
		i++;
	}
	if (i == a)
	cout << " number is a prime number";
	else
		cout << " number is a  not prime number";
	cin.get();
	cin.get();
}