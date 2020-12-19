#include <iostream>
#include <string>

int main()
{
  std::cout << "Please Enter your first name and age\n";
  std::string first = "???";
  double age = 0;
  std::cin >> first >> age;
  int months = age * 12;
  std::cout << "Hello, " << first << " (age " << age << " years or " << months << " months)" << std::endl;
}
