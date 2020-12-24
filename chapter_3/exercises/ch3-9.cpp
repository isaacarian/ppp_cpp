#include <iostream>
#include <string>

int main()
{
  std::string numStr = "";

  std::cout << "Enter a number in words: ";
  std::cin >> numStr;

  if (numStr == "zero")
    std::cout << 0;
  else if (numStr== "one")
    std::cout << 1;
  else if (numStr== "two")
    std::cout << 2;
  else if (numStr== "three")
    std::cout << 3;
  else if (numStr== "four")
    std::cout << 4;
  else
    std::cout << "not a number I know";

  std::cout << std::endl;

  return 0;
}
