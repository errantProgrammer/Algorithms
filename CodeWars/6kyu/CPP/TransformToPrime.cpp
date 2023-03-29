// src: https://www.codewars.com/kata/5a946d9fba1bb5135100007c/
#include <vector>
#include <numeric>
using namespace std; 

bool isPrime(int num){
  if(num <= 1) return false;
  for(int i = 2; i * i <= num; i++){
    if(num % i == 0) return false;
  }
  return true;
}

int minimumNumber (vector <int> numbers ){
  int sum = accumulate(numbers.begin(),numbers.end(),0);
  int i = 0;
  while(!isPrime(sum + i)) i++;
  return i;
}
