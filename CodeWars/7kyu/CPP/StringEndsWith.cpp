// src: https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/cpp
#include <string>

bool solution(std::string const &str, std::string const &ending) {
    int i = str.size() - 1, j = ending.size() - 1;
    while(j >= 0){
      if(str[i--] != ending[j--]) return false;
    }
    return true;
}
