// src: https://www.codewars.com/kata/52efefcbcdf57161d4000091
#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
  if (string == "") return {};
  std::map<char,unsigned> count_char;
  for(auto c : string){
    if (count_char.find(c) != count_char.end()) {
        count_char[c]++;
    }else {
        count_char[c] = 1;
    }
  }
    return count_char;
}