//src: https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/
std::string reverse_words(std::string str){
  std::string sol;
  std::string word;
  for(auto i: str){
    if(i == ' '){
      std::reverse(word.begin(),word.end());
      sol += word;
      sol += " ";
      word = "";
      continue;
    }
    word += i;
  }
  std::reverse(word.begin(),word.end());
  sol += word;
  return sol;
}
