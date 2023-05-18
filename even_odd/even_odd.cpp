#include <iostream>

using namespace std;

string even_odd(int num)
{
	if (num % 2 == 0)
		return "Even";
	else
		return "Odd";
}

int main()
{
	int num;
	cout << "enter a number: ";
	cin >> num;
	cout << "The number you entered is: \" " << even_odd(num) << " \"." << endl;

	return 0;
}