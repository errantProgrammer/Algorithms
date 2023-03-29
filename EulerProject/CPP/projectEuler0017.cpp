/*
Jesus M. Huayhua Flores 
src: 
pdf: 
*/
#include <iostream>

std::string number_to_english(int n){
    std::string ones[] ={
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
        "eighteen", "ninety"
    };
    std::string tens[] = { "$","$","twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    int n = 137;
    
    if ( 0 <= n < 20){
        std::cout << ones[n] << std::endl;
    }else if (20 < n < 100){
        std::cout << tens[n] << "-" << ones[n%10] << std::endl;
    }else if (100 <= n <= 900){
        std::cout << ones[n/100] + " hundred";
    }else if (100 < n < 1000){
        std::cout <<  ones[n/100] << "hundred and" << number_to_english(n%100);
    }else if( 1000 < n < 10000){
        return;
    }else if (n == 1000){
        std::cout << "one thousand" << std::endl;
    }else{
        std::cout << "unexpected input";
    }
}

int main(){
    return 0;
}
