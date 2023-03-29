/*
Jesus M. Huayhua Flores 
src: 
pdf: 
*/
#include <iostream>
#include <cmath>

int main(){
    int k = 20;
    int N = 1, i = 0;
    bool check = true;
    int limit = sqrt(20);
    int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    int a[20] = {0};
    while (p[i] <= k) {
        a[i] = 1;
        if (check) {
            if (p[i] <= limit) {
                a[i] = floor(log(k) / log(p[i]));
            } else {
                check = false;
            }
        }
        N *= pow(p[i], a[i]);
        i++;
    }
    std::cout << "=> " << N;
    return 0;
}
