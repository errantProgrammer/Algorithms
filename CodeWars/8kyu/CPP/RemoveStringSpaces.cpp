// src: https://www.codewars.com/kata/57eae20f5500ad98e50002c5
#include <string>

std::string no_space(const std::string& x){
    if(x == "") return x;
    std::string sol;
    for(int i = 0; i < x.size(); i++){
        if(x[i] == ' ') continue;
        sol += x[i];
    }
    return sol;
}
