/*
Jesus M. Huayhua Flores 
src: 
pdf: 
*/
#include <iostream>
#include <cmath>

typedef long long int Long;

bool isPalindrome(int x) {
    if (x < 0 || (x > 0 && x % 10 == 0)) return false;
    Long m = x, a = 0;
    while (m > 0) {
        a = a * 10;
        a = a + (m % 10);
        m /= 10;
    }
    if (a == x) return true;
    return false;
}

int main(){
    int num = 999 * 999, centinela = 0;
    for (int i = num; i >= 10000; i--) {
        if (isPalindrome(i)) {
            int j = 100;
            while (j < sqrt(i)) {
                if (i % j == 0) {
                    if (2 == (int) (log10(i / j))) {
                        std::cout << "=>" << i / j << "=>" << j << "=>" << i << std::endl;
                        centinela = 1;
                        break;
                    }
                }
                j++;
            }
        }
        if (centinela) {
            break;
        }
    }
    return 0;
}
