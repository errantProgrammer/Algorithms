/*
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=20
pdf: no
*/
#include <iostream>
#include <string.h>
#include <ctime>

int sumDigits(std::string s){
  int sum = 0;
  while (s.size() != 0){
    sum += s[s.size() - 1] - 48;
    s.erase(s.size() - 1);
  }
  return sum;
}

std::string factorial(int n) {
  std::string f = "1";
  int carry = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = f.length() - 1; j >= 0; j--) {
      int num = (f[j] - 48) * i; // pasamos el número en codigo ASCII a entero
      num += carry;
      carry = num / 10;
      f[j] = (num % 10) + 48; // Regresamos el número a valor en código ASCII
    }
    if (carry) {
      f = std::to_string(carry) + f;
      carry = 0;
    }
  }
  return f;
}

int main(){
  double t0,t1;
  t0  = clock();
  std::string f; 
  f  = factorial(100);
  int sum = sumDigits(f);
  t1  = clock();
  std::cout << "Suma de Digitos: " << sum << std::endl; // suma de los dígitos
  std::cout << "TIME: " << (double(t1-t0)/CLOCKS_PER_SEC)<<std::endl;
  return 0;
}
