//src: https://www.codewars.com/kata/5a651865fd56cb55760000e0
#include <vector>
#include <numeric>

using namespace std; 

vector<int> arrayLeaders(const vector<int>& numbers){
  if(numbers.size() == 0) return {};
  if(numbers.size() == 1) return numbers;
  vector<int> sol;
  for(int i = 0; i < numbers.size(); i++){
    int sum = std::accumulate(numbers.begin() + i + 1, numbers.end(),0);
    if(numbers[i] > sum){
      sol.push_back(numbers[i]);
    }
  }
  return sol;
}
