/*
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=18
pdf: no
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
  std::ifstream archProblem ("projectEuler0018.txt",std::ios::in);
  // Se abrio el archivo
  std::vector<std::vector<int>> data;
  for (int i = 1; i <= 15 ; i++){
    std::vector<int> d;
    for (int j = 0; j < i ; j++) {
      int e;
      archProblem >> e;
      d.push_back(e);
    }
      data.push_back(d);
  }
  archProblem.close();
  for(int i = data.size() - 2; i >= 0 ; i--){
    for(int j = 0; j <= i; j++){
      data[i][j] += std::max(data[i+1][j],data[i+1][j+1]);
    }
  }
  std::cout << "Suma: " << data[0][0] << std::endl;
  return 0;
}
