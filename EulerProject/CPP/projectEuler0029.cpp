/*
Problema: 29
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=29
pdf:No
Answer: 9183
 */
#include <iostream>
#include <cmath>
#include <set>

int main() {
    std::set<double> terms;
    for (int a = 2; a <= 100; a++) {
        for (int b = 2; b <= 100; b++) {
            double c = pow(a,b);
            terms.insert( c );
        }
    }
    std::cout << terms.size() << std::endl;
    

    return 0;
}
