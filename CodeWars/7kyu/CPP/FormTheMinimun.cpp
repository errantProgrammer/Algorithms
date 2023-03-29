// src: https://www.codewars.com/kata/5ac6932b2f317b96980000ca/
#include <vector>

using namespace std; 

unsigned long long minValue (vector <int> v){
  if(v.size() == 0) return 0;
  sort(v.begin(), v.end());
  v.erase(std::unique(v.begin(), v.end()), v.end());
  unsigned long long num = 0;
  for(unsigned long i = 0; i < v.size(); i ++){
    num = (num * 10) + v[i];
  }
 return num; 
}
