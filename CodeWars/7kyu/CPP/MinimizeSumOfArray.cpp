// src: https://www.codewars.com/kata/5a523566b3bfa84c2e00010b
#include <vector>

using namespace std;

int minSum (vector<int>passed){
  if(passed.size() == 1) return passed[0];
  // Ordenamos el vecotr
  sort(passed.begin(),passed.end());
  int n = passed.size(); // Cantidad de datos
  int i = 0, j = n - 1;
  int sum = 0;
  while(i < j){
    sum += passed[i++] * passed[j--];
  }
  if(i == j) sum += passed[i];
  return sum; 
}
