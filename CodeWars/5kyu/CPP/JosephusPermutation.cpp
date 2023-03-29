//src: https://www.codewars.com/kata/5550d638a99ddb113e0000a2/
std::vector <int> josephus(std::vector < int > items, int k) {
  if(k == 1 || items.size() == 0) return items;
  std::vector<int> sol;
  int n = items.size(),ans = 0;
  k--;
  while( n != 0){
    ans = (ans + k) % n;
    sol.push_back(items[ans]);
    items.erase(items.begin() + ans);
    n--;
  }
  return sol;
