//src: https://www.codewars.com/kata/5a63948acadebff56f000018
#include <vector>
#include <numeric>
using namespace std; 

int maxProduct (vector<int>numbers , int sub_size)
{
  sort(numbers.begin(),numbers.end());
  int product = std::accumulate(numbers.end() - sub_size, numbers.end(), 1, std::multiplies<int>());
  return product;
}
