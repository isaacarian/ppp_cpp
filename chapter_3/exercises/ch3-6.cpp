#include <iostream>

int main()
{
  double val1, val2, val3 = 0;

  std::cout << "Enter a number: ";
  std::cin >> val1;
  std::cout << "Enter another number: ";
  std::cin >> val2;
  std::cout << "Enter another number: ";
  std::cin >> val3;

  double largest, middle, smallest = 0;

  if (val1 >= val2 && val1 >= val3)
    largest = val1;
  else if (val2 >= val1 && val2 >= val3)
    largest = val2;
  else
    largest = val3;

  if (val1 <= val2 && val1 <= val3)
    smallest = val1;
  else if (val2 <= val1 && val2 <= val3)
    smallest = val2;
  else
    smallest = val3;

  if (val1 != smallest && val1 != largest)
    middle = val1;
  else if (val2 != smallest && val2 != largest)
    middle = val2;
  else
    middle = val3;

  std::cout << smallest << ", " << middle << ", " << largest << std::endl;

  return 0;
}
