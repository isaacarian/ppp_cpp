#include <iostream>
#include <cmath>

int main()
{
  std::cout << "Please enter a floating point value: ";
  int n;
  std::cin >> n;
  std::cout << "n == " << n
            << "\nn+1 == " << n + 1
            << "\nthree time n == "<< 3*n
            << "\ntwice n == " << n + n
            << "\nn squared == " << n*n
            << "\nhalf of n == " << n/2
            << "\nsquare root of n " << std::sqrt(n)
            << "\nremainder of n/2 == " << n%2
            << "\nn++ == " << n++
            << '\n';

  return 0;
}
