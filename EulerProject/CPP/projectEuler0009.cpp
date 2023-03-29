/*
Jesus M. Huayhua Flores 
src: 
pdf: 
*/
#include <iostream>

typedef long long int Long;

int main(){
    int n = 1000;
    bool centinela = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            Long c = n - i - j;
            if (i * i + j * j == c * c) {
                centinela = true;
                std::cout << "=>" << i << "=>" << j << "=>" << c << std::endl;
                std::cout << "R=>" << i * j*c;
                break;
            }
        }
        if (centinela) {
            break;
        }
    }
    return 0;
}
