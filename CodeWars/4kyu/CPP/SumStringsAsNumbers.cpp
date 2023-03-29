//src: https://www.codewars.com/kata/5324945e2ece5e1f32000370/
#include <string>

std::string sum_strings(const std::string& a, const std::string& b) {
  std::string sol;
  int carry = 0;
  int n1 = a.size() - 1;
  int n2 = b.size() - 1;
  while(n1 >= 0 && n2 >= 0){
    int sum = a[n1]  - '0' + b[n2] - '0' + carry;
    carry = sum / 10;
    sol += (sum % 10) + '0';
    n1--;
    n2--;
  }
  while(n1 >= 0){
    int num = a[n1] -'0' + carry;
    carry = num / 10;
    sol += (num %10) + '0';
    n1--;
  }
  while(n2 >= 0){
    int num = b[n2] -'0' + carry;
    carry = num / 10;
    sol += (num % 10) + '0';
    n2--;
  }
  if(carry > 0 && carry < 10){
    sol += carry + '0';
  }else if(carry >= 10){
    sol += carry%10 + '0';
    sol += carry/10 + '0';
  }
  std::reverse(sol.begin(),sol.end());
  return sol;
}
