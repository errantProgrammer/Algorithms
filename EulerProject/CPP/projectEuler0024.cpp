/*
Problema: 24
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=24
pdf: no
Answer: 
*/
#include <iostream>
#include <string>
#include <algorithm>

int main(){
  unsigned int numPermutation = 1000000;
  std::string current ="0123456789";
  while (--numPermutation) {
    std::next_permutation(current.begin(),current.end());
  }
  std::cout << current << std::endl;
}
