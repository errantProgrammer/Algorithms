/*
Jesus M. Huayhua Flores 
src: 
pdf: 
*/
#include <iostream>
#include <cmath>
#include <vector>

bool isPrimeNumber(int k) {
    if (k <= 1) return false;

    for (int i = 2; i < k; i++) {
        if (k % i == 0)
            return false;
    }
    return true;
}

long long _10001st_prime() {
    std::vector<long long> primes{ 2, 3};
    long long current = 3;

    while (primes.size() < 10001) {
        current += 2;

        bool is_prime = true;
        long long sqrt_current = sqrt(current);

        for (long long prime : primes) {
            if (prime > sqrt_current) {
                break;
            };

            if (current % prime == 0) {
                is_prime = false;
                break;
            };
        };

        if (is_prime) {
            primes.push_back(current);
        };
    };
    std::cout << "10001st prime number: " << primes.back() << std::endl;
    return 0;
}

int main(){
    int counter = 0;
    for (int number = 0; number >= 0; number++) {
        if (isPrimeNumber(number)) {
            counter++;
        }
        if (counter == 10001) {
            std::cout << "The 10001st prime number is: " << number << std::endl;
            break;
        }
    }
    _10001st_prime();
    return 0;
}
