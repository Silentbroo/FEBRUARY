#include <iostream>
using namespace std;

int main() {
	char input;
	double num1;
	double num2;
	double some;

	cout << "do you want to (a)add, (b)subtract, (c)divide, or (d)multiply?" << endl;

	cin >> input;
	if (input == 'a')
		input = 1;
	if (input == 'b')
		input = 2;
	if (input == 'c')
		input = 3;
	if (input == 'd')
		input = 4;
	switch (input) {
	case 1:
		cout << "choose two numbers" << endl;
		cin >> num1;
		cin >> num2;
		some = num1 + num2;
		cout << "Your calculation is.." << some << endl;
		break;

	case 2:
		cout << "choose two numbers" << endl;
		cin >> num1;
		cin >> num2;
		some = num1 - num2;
		cout << "Your calculation is.." << some << endl;
		break;
	case 3:
		cout << "choose two numbers" << endl;
		cin >> num1;
		cin >> num2;
		some = num1 / num2;
		cout << "Your calculation is.." << some << endl;
		break;
	case 4:
		cout << "choose two numbers" << endl;
		cin >> num1;
		cin >> num2;
		some = num1 * num2;
		cout << "Your calculation is.." << some << endl;

	}
}