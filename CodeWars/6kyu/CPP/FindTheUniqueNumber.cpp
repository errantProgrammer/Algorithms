//src: https://www.codewars.com/kata/585d7d5adb20cf33cb000235/
float find_uniq(const std::vector<float> &v){
  float n = v[0];
  if (n != v[1] && n != v[2]) return n;
  for(auto i: v){
    if(i != n) return i;
  }
}
