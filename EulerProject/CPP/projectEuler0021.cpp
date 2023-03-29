/*
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=21
pdf: no
Answer: 
*/
#include <iostream>
#include <set>

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

int main(){
  std::set<unsigned int> amicables;
  for (unsigned int i = 2; i < 10000; i++){
    auto sibling = getSumDivible(i);
    if( i == getSumDivible(sibling) && i != sibling){
      amicables.insert(i);
      amicables.insert(sibling);
    }
  }
  
  unsigned int sum = 0;
  for(auto j : amicables){
    sum += j;
  }
  std::cout << "Sum: " << sum << std::endl;
  return 0;
}
