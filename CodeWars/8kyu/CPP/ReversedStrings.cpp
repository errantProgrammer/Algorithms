//src: https://www.codewars.com/kata/5168bb5dfe9a00b126000018/
#include <string>
#include <algorithm> 
using namespace std ; 

string reverseString (string str ){
  string sol;
  for(int i = str.size() - 1; i >= 0; i--){
    sol += str[i];
  }
  return sol;
}
