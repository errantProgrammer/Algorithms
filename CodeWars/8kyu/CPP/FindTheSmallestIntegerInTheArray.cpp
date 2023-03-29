//src: https://www.codewars.com/kata/55a2d7ebe362935a210000b2/
#include <vector>

using namespace std; 

int findSmallest(vector <int> list){
   sort(list.begin(),list.end());
  return list[0];
}
