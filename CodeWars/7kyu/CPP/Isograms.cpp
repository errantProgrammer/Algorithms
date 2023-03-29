// src: https://www.codewars.com/kata/54ba84be607a92aa900000f1/

#include <set>
#include <cctype>
bool is_isogram(std::string str) {
  std::set<char> word;
  for(auto i: str){
    if(word.find(toupper(i)) == word.end()) word.insert(toupper(i));
    else return false;
  }
  return true;
}
