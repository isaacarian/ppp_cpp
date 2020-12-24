#include <iostream>
#include <string>

int main()
{
  std::string operation = "";
  double operand1, operand2 = 0;

  std::cout << "Enter prefix operation in prefix notation: \n";
  std::cin >> operation;
  std::cin >> operand1;
  std::cin >> operand2;

  if (operation == "+")
    std::cout << operand1 + operand2;
  else if (operation == "-")
    std::cout << operand1 - operand2;
  else if (operation == "*")
    std::cout << operand1 * operand2;
  else if (operation == "/")
    std::cout << operand1 / operand2;
  else if (operation == "plus")
    std::cout << operand1 + operand2;
  else if (operation == "minus")
    std::cout << operand1 - operand2;
  else if (operation == "mul")
    std::cout << operand1 * operand2;
  else if (operation == "div")
    std::cout << operand1 / operand2;
  else
    std::cout << "ERROR: Couldn't parse operation.";

  std::cout << std::endl;

  return 0;
}
