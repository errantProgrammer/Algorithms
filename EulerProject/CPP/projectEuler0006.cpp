/*
Jesus M. Huayhua Flores 
src: 
pdf: 
*/
#include <iostream>

int main(){
    int n = 100;
    // Sum n first number
    int sum1 = n * (n + 1) / 2;
    // Sum n squares first number
    int sum2 = n * (n + 1)*(2 * n + 1) / 6;
    int result = (sum1 * sum1) - sum2;
    std::cout << result << std::endl;
    return 0;
}
