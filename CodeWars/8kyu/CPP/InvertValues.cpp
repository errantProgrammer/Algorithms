//src: https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad/
#include <vector>

std::vector<int> invert(std::vector<int> values){
  for(unsigned int i = 0; i < values.size(); i++) values[i] = -values[i];
    return values;
}
