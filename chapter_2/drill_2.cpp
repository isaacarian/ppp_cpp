#include <iostream>

//I can't be bothered to install the helper library
int main()
{
  std::cout << "Hello, World!\n";
  char c;
  std::cin >> c; //keeps window open, although not really necessary in command line
  return 0;
}

/* LOG FOR EACH OF THE ERRORS

1.

drill_2.cpp: In function ‘int main()’:
drill_2.cpp:6:8: error: ‘cout’ is not a member of ‘std’
   std::cout <<"Hello, World!\n";
        ^~~~
drill_2.cpp:8:8: error: ‘cin’ is not a member of ‘std’
   std::cin >> c; //keeps window open
        ^~~

2.

drill_2.cpp:1:10: fatal error: ioseam: No such file or directory
 #include <ioseam>
          ^~~~~~~~
compilation terminated.

3.

drill_2.cpp:6:15: warning: missing terminating " character
   std::cout <<"Hello, World!\n;
               ^
drill_2.cpp:6:15: error: missing terminating " character
   std::cout <<"Hello, World!\n;
               ^~~~~~~~~~~~~~~~~
drill_2.cpp: In function ‘int main()’:
drill_2.cpp:7:3: error: expected primary-expression before ‘char’
   char c;
   ^~~~
drill_2.cpp:8:15: error: ‘c’ was not declared in this scope
   std::cin >> c; //keeps window open

4.

drill_2.cpp:4:1: error: ‘integer’ does not name a type
 integer main()
 ^~~~~~~

5. (Too long to post)

6.

drill_2.cpp:6:16: warning: character constant too long for its type
   std::cout << 'Hello, World!\n';
                ^~~~~~~~~~~~~~~~~
/tmp/ccdSWQFZ.o: In function `main':
drill_2.cpp:(.text+0x1f): undefined reference to `std::cout'
drill_2.cpp:(.text+0x24): undefined reference to `std::ostream::operator<<(int)'
drill_2.cpp:(.text+0x32): undefined reference to `std::cin'
drill_2.cpp:(.text+0x37): undefined reference to `std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char> >(std::basic_istream<char, std::char_traits<char> >&, char&)'
/tmp/ccdSWQFZ.o: In function `__static_initialization_and_destruction_0(int, int)':
drill_2.cpp:(.text+0x7b): undefined reference to `std::ios_base::Init::Init()'
drill_2.cpp:(.text+0x90): undefined reference to `std::ios_base::Init::~Init()'
collect2: error: ld returned 1 exit status


7.

drill_2.cpp: In function ‘int main()’:
drill_2.cpp:7:3: error: expected ‘;’ before ‘char’
   char c;
   ^~~~
drill_2.cpp:8:15: error: ‘c’ was not declared in this scope
   std::cin >> c; //keeps window open
               ^


*/
