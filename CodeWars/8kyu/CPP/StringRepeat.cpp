// src: https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/
#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  
  std::string sol;
  int n = repeat / 2;
  for(int i = 0; i < n; i++)
    sol += str;
  sol += repeat % 2 == 0 ? sol : (sol + str);
  return sol;
}
