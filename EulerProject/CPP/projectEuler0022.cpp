/*
Problema: 22
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=22
pdf: no
Answer: 871198282
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
#include <algorithm>

std::vector<std::string> readNames(){
  std::ifstream archProblem ("projectEuler0022.txt",std::ios::in);
  std::vector<std::string> names;
  std::string name;
  char c;
  while(archProblem.get(c)){
    if(archProblem.eof()){
      break; 
    }
    if(c == '"') continue;
    if(c == ','){
      names.push_back(name);
      name.clear();
      continue;
    }
    name += c;
  }
  names.push_back(name);
  return names;
}


int main(){
  std::vector<std::string> names = readNames();
  std::vector<int> sumNames;
  // Ordenamos el vector
  std::sort(names.begin(),names.end()); // ordenamos el vector
  // Contamos
  for (int i = 0; i < names.size(); i++) { // Nombre
    int sum = 0;
    for(int j = 0; j < names[i].size(); j++) { // character
      sum += names[i][j] - 'A' + 1;
    }
    sumNames.push_back(sum * (i + 1));
  }
  std::cout << std::accumulate(sumNames.begin(),sumNames.end(),0);
  return 0;
}
