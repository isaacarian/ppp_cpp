#include <iostream>

using namespace std;

int main()
{
	constexpr double kroner = 8.2931;
	constexpr double yen = 108.0800;
	constexpr double pounds = 0.7195;

	char unit = 'x';
	double amount = 0;

	cout << "Enter the amount followed by the currency (k = kroner, p = pounds, y = yen):" << endl;
	cin >> amount >> unit;
	cout << "That is ";

	if (unit == 'k')
		cout << amount / kroner<< " dollars.";
	else if (unit == 'y')
		cout << amount / yen << " dollars.";
	else if (unit == 'p')
		cout << amount / pounds << " dollars.";
	else
		cout << " an incorrect option.";

	cout << endl;	

	return 0;
}
