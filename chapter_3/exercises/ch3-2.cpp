#include <iostream>

int main()
{
  double miles, kilometers = 0;
  std::cout << "Enter miles: ";
  std::cin >> miles;

  kilometers = miles * 1.609;
  std::cout << "Kilometers: " << kilometers;

  return 0;
}
