/*
Jesus M. Huayhua Flores 
src: 
pdf: 
*/
#include <iostream>

typedef long long int Long;

int main(){
    //    Long max = 600851475143;
    Long max = 600851475143;
    Long maxPrime = -1;
    while (max % 2 == 0) {
        maxPrime = 2;
        max >>= 1; // n /= 2;
    }
    while (max % 3 == 0) {
        maxPrime = 3;
        max = max / 3;
    }
    for (int i = 5; i <= sqrt(max); i += 6) {
        while (max % i == 0) {
            maxPrime = i;
            max = max / i;
        }
        while (max % (i + 2) == 0) {
            maxPrime = i + 2;
            max = max / (i + 2);
        }
    }
    if (max > 4) maxPrime = max;
    std::cout << maxPrime << std::endl;
    return 0;
}
