// src: https://www.codewars.com/kata/525f4206b73515bffb000b21/
#include <string>

std::string add(const std::string& a, const std::string& b) {
  int carry = 0,sum = 0;
  int i = a.size() - 1,j = b.size() - 1;
  std::string sol = "";
  while(i >= 0 || j >= 0){
    sum = carry;
    if( i >= 0) sum += a[i--] - '0';
    if( j >= 0) sum += b[j--] - '0';
    carry = sum / 10;
    sum %= 10;
    sol = std::to_string(sum) + sol;
  }
  if(carry > 0){
    sol = std::to_string(carry) + sol;
  }
  return sol;
}