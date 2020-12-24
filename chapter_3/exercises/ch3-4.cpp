#include <iostream>

int main()
{
  int val1, val2 = 0;

  std::cout << "Enter a number: ";
  std::cin >> val1;
  std::cout << "Enter another number: ";
  std::cin >> val2;

  int larger, smaller = 0;
  if (val1 > val2)
  {
    larger = val1;
    smaller = val2;
  }
  else
  {
    larger = val2;
    smaller = val1;
  }

  int sum = val1 + val2;
  int difference = larger - smaller;
  int product = val1 * val2;
  double dval1 = val1;
  double dval2 = val2;
  double ratio = dval1 / dval2;

  std::cout << "Smaller: " << smaller
            << "\nLarger: " << larger
            << "\nSum: " << sum
            << "\nDifference: " << difference
            << "\nProduct: " << product
            << "\nRatio: " << ratio
            << std::endl;

  return 0;

}
