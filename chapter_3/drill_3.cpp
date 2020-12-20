#include <iostream>
#include <string>

int main()
{
  std::string first_name, friend_name = "";
  char friend_sex = 0;
  int age = 0;

  std::cout << "Please enter the name of the person you wish to speak to: ";
  std::cin >> friend_name;
  std::cout << "Enter their gender ('m', 'f', or 'x'): ";
  std::cin >> friend_sex;
  std::cout << "Enter their age: ";
  std::cin >> age;
  std::cout << "Enter your name: ";
  std::cin >> first_name;


  std::cout << "Dear " << friend_name << ", \n";
  std::cout << "\n\t";
  if (friend_sex == 'f')
    std::cout << "If you see " << friend_name << " please ask her to call me. ";
  else if (friend_sex == 'm')
    std::cout << "If you see " << friend_name << " please ask him to call me. ";
  else
    std::cout << "If you see " << friend_name << " please ask them to call me. ";

  std::cout << "I hear you just had a birthday at " << age << ". ";

  if (age < 0 || age > 110)
    std::cout << "You're kidding! ";

  if (age < 12)
    std::cout << "Next year you will be " << age + 1 << ". ";
  if (age == 17)
    std::cout << "Next year you'll be able to vote! ";
  if (age > 70)
    std::cout << "I hope you're enjoying retirement. ";

  std::cout << "\n\nYours sincerely, \n\n" << first_name << std::endl;

  return 0;
}
