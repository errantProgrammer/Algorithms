/*
Jesus M. Huayhua Flores 
src: 
pdf: 
*/
#include <iostream>

typedef long long int Long;

int main(){
    Long F[100000];
    F[0] = 0;
    F[1] = 1;
    Long i = 0, j = 1;
    do {
        j++;
        F[j] = F[j - 1] + F[ j - 2];
        if (F[j] % 2 == 0) i += F[j];
    } while (F[j] < 4000000);
    std::cout << i << std::endl;
    return 0;
}
