/*
Problema: 34
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=34
pdf: No
Answer: 40730
 */
#include <iostream>
#include <vector>

int factorial(int num){
    if(num == 0) return 1;
    if(num <= 2) return num;
    int fac[num + 1];
    fac[0] = 1;
    fac[1] = 1;
    for (int i = 2; i <= num; i++) {
        fac[i] = i * fac[i - 1];
    }
    return fac[num];
}

int main() {
    int sum = 0;
    int f = factorial(9);
    for(int i = 3; i <= 7 * f; i++){
        int thisSum = 0;
        int aux = i;
        while(aux){
            thisSum += factorial(aux % 10);
            aux /= 10;
        }
        if(thisSum == i) sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}