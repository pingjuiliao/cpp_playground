#include <stdio.h>

#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string s = "hello";
  puts("Showing content");
  std::cout << s << std::endl;
  puts("Showing length:");
  std::cout << s.length() << std::endl;
  return 0;
}
