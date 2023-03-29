// src: https://www.codewars.com/kata/5a7893ef0025e9eb50000013/

#include <vector>
#include <limits.h>
using namespace std; 

int maxGap (vector <int> numbers){
  sort(numbers.begin(),numbers.end());
  int minMax = INT_MIN;
  for(int i = 1; i < numbers.size(); i++){
    int minParcial = abs(numbers[i] - numbers[i - 1]);
    minMax = minParcial > minMax ? minParcial : minMax;
  }
  return minMax;
}
