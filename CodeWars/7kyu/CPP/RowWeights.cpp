// src: https://www.codewars.com/kata/5abd66a5ccfd1130b30000a9/
#include <vector>
#include <utility>

using namespace std; 

pair<int,int> rowWeights (const vector <int> &weights){
  int sumLeft = 0, sumRight = 0;
  for(int i = 0; i < weights.size(); i++){
    if(i % 2) sumRight += weights[i];
    else sumLeft  += weights[i];
  }
  return {sumLeft,sumRight};
}
