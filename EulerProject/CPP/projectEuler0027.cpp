/*
Problema: 27
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=27 
pdf: No
Answer: -59231 
*/
#include <iostream>

bool isPrime(int num){
    if( num <= 1) return false;
    for(int factor = 2; factor * factor <= num; factor++){
        if(num % factor == 0) return false;
    }
    return true;
}

int main(){
    int limit = 1000; // se podría sugerir que ingrese el dato al usuario
    unsigned int consecutive = 0;
    int bestA = 0,bestB = 0;
    for(int a = -limit; a <= +limit; a++){
        for(int b = -limit; b <= +limit; b++){
            unsigned int length = 0;
            while(isPrime((length * length) + (a * length) + b)){
                length++;
            }
            if(consecutive < length){
                consecutive = length;
                bestA = a;
                bestB = b;
            }
        }
    }
    std::cout << (bestA * bestB ) << std::endl;
    
    return 0;
}
