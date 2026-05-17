#include <iostream> 
#include <memory>

#include "timerfunc.hpp"

int main() { 
 std::cout << "Type in your time!! in secs\n"; 
 
 std::unique_ptr<int> numbers = std::make_unique<int>();
 
 std::cin >> *numbers;
 std::cout << "\n";
 
 timerfunc(*numbers);
 
 std::cout << "The end!";
}
