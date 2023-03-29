//src: https://www.codewars.com/kata/57f781872e3d8ca2a000007e/
std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> sol;
  for(auto i: values){
    sol.push_back(i * 2);
  }
  return sol;
}
