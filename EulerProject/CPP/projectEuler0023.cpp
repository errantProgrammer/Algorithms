/*
Problema: 23
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=23
pdf: no
Answer: 4179871
*/
#include <iostream>
#include <set>

typedef unsigned long long uLong;

const unsigned int maxAbundantNumber = 28123;


unsigned int getSumDivible(unsigned int x){
  unsigned int divisorSum = 1;
  for (int divisor = 2; divisor * divisor <= x; divisor++){
    if(x % divisor == 0){
      divisorSum += divisor;
      auto otherDivisor = x / divisor;
      if (otherDivisor != divisor)
        divisorSum += otherDivisor;
    }
  }
  return divisorSum;
}

std::set<unsigned int> abundatNumbers(){
  std::set<unsigned int> numbers;
  for (unsigned int i = 1; i < maxAbundantNumber; i++) {
    if(i < getSumDivible(i)){
      numbers.insert(i);
    }
  }
  return numbers;
}

bool isAbundantSum(unsigned int x,std::set<unsigned int> abundatNumber){
  for(auto i : abundatNumber){
    if( i >= x) return false;
    unsigned int other = x - i;
    if(abundatNumber.count(other) == 0)
      continue;
    return true;
  }
  return false;
}

int main(){
  std::set<unsigned int> abundatNumber = abundatNumbers();
  // cargamos todo los números abundates
  // last number= 28122
  uLong sum = 0;
  for (unsigned int i = 0; i < maxAbundantNumber ; i++){
    if(!isAbundantSum(i,abundatNumber)){
      sum += i;
    }
  }
  std::cout << sum << std::endl;
  return 0;
}
