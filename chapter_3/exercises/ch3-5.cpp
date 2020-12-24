#include <iostream>

int main()
{
  double val1, val2 = 0;

  std::cout << "Enter a double number: ";
  std::cin >> val1;
  std::cout << "Enter another double number: ";
  std::cin >> val2;

  double larger, smaller = 0;
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

  double sum = val1 + val2;
  double difference = larger - smaller;
  double product = val1 * val2;
  double ratio = val1 / val2;

  std::cout << "Smaller: " << smaller
            << "\nLarger: " << larger
            << "\nSum: " << sum
            << "\nDifference: " << difference
            << "\nProduct: " << product
            << "\nRatio: " << ratio
            << std::endl;

  return 0;

}
