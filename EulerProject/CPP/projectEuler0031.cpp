/*
Problema: 31
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=31
pdf: Si
Answer: 73682
 */
#include <iostream>
#include <vector>

int main() {
    int coins[8] = {1,2,5,10,20,50,100,200};
    int target = 200;
    std::vector<int> ways(target + 1, 0);
//    int *ways = new int[target + 1];
    ways[0] = 1;
    for (int i = 0; i < 8; i++) {
        for (int j = coins[i]; j <= target; j++) {
            ways[j] += ways[j - coins[i] ];
        }
    }
    std::cout << ways[target] << std::endl;

    return 0;
}

/*
 * Explicación en el PDF
 */