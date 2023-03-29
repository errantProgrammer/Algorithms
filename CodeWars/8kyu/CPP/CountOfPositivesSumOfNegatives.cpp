// src: https://www.codewars.com/kata/576bb71bbbcf0951d5000044/
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  if (input.size() == 0) return {};
    int cant_positive = 0, sum_negative = 0;
    for(auto i: input){
      if ( i > 0) cant_positive++;
      if ( i < 0) sum_negative += i;
    }
  return {cant_positive, sum_negative};
}