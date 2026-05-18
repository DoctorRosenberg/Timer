#include <iostream> 
#include <memory>

#include "timerfunc.hpp"

int main() { 
 std::cout << "Type in your time!! in secs\n"; 
 
 std::unique_ptr<int> numbers = std::make_unique<int>();
 std::unique_ptr<char> TimerChoice = std::make_unique<char>();
 
 std::cin >> *numbers;
 std::cout << "\n";
 
 std::cout << "Type of a timer? \n" << "A. From zero to the top. \nB. From the top to zero. \n";
 
 std::cin >> *TimerChoice;
 std::cout << "\n";
 
 switch(*TimerChoice) {
  case 'a':
  case 'A':
   timerfuncDOWNTOUP(*numbers);
   break;
  case 'b':
  case 'B':
   timerfuncUPTODOWN(*numbers);
   break;
  default:
   std::cerr << "Have a nice day. \n";
 }
 
 std::cout << "The end!";
}
