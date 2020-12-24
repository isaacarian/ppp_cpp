#include <iostream>

int main()
{
  int val1 = 0;

  std::cout << "Give me a number: ";
  std::cin >> val1;

  if (val1 % 2 == 0)
    std::cout <<"\nEven.";
  else
    std::cout <<"\nOdd.";

  std::cout << std::endl;

  return 0;
}
