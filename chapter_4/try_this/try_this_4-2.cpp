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
	
	switch (unit)
	{
		case 'k':
			cout << amount / kroner<< " dollars.";
			break;
		case 'y':
			cout << amount / yen << " dollars.";
			break;
		case 'p':
			cout << amount / pounds << " dollars.";
			break;
		default:	
			cout << " an incorrect option.";
			break;
	}
	cout << endl;	

	return 0;
}
