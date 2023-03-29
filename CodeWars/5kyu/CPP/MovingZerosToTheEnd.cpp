// src: https://www.codewars.com/kata/52597aa56021e91c93000cb0/
#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> sol;
  int cant = 0;
  for(unsigned long i = 0; i < input.size(); i++){
    if(input[i] == 0){
      cant++;
      continue;
    }
    sol.push_back(input[i]);
  }
  while(cant--){
    sol.push_back(0);
  }
  return sol;
}
