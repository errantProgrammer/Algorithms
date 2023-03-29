//src: https://www.codewars.com/kata/54edbc7200b811e956000556/
#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) {
  int cant = 0;
  for(auto i: arr) cant += i == true ? 1 : 0;
  return cant;
}
