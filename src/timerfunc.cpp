#include <iostream> 
#include <memory>
#include <chrono>
#include <thread>

#include "timerfunc.hpp"

void timerfunc(int seconds) {
 for (int c = 0; c < seconds; c++) { //oh my fucking god is this a c++ reference
  std::cout << c << "\n";
  std::this_thread::sleep_for(std::chrono::seconds(1));
 }
}
