// src: https://www.codewars.com/kata/5648b12ce68d9daa6b000099/
#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  unsigned int subida = 0, bajada = 0;
  for(auto i: busStops){
    subida += i.first;
    bajada += i.second;
  }
  return subida - bajada;
}
