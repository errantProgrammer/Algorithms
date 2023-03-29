//src: https://www.codewars.com/kata/5a905c2157c562994900009d
#include <vector>
#include <numeric>
using namespace std; 

vector <int> productArray (vector <int> numbers){
  int product = accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<int>());
  for(int i = 0; i < numbers.size();i++){
    numbers[i] = product/numbers[i];
  }
  return numbers;
}
