// src: https://www.codewars.com/kata/5aa1bcda373c2eb596000112/
#include <vector>
#include <limits.h>


using namespace std; 

int maxTriSum (vector <int> numbers){
  sort(numbers.begin(),numbers.end());
  int i = 3, sum = 0,numAnt = INT_MAX,j = numbers.size() - 1;
  while(i){
    if(numbers[j] == numAnt){
      j--;
      continue;
    }
    numAnt = numbers[j];
    sum += numbers[j];
    j--;
    i--;
    /*if(numbers[j] != numAnt){
      numAnt = numbers[j];
      sum += numbers[j];
      j--;
      i--;
    }else{
      j--;
    } */
  }
  return sum;
}
