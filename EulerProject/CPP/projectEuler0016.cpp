/*
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=16
pdf: no
*/
#include <iostream>
#include <string.h>
#include <cmath>
#include <ctime>

int sumDigits(std::string s){
    int sum = 0;
    while(s.size() != 0){
        sum += s[s.size() - 1] - 48;
        s.erase(s.size() - 1);
    }
    return sum;
}

int main() {
    double t0,t1;
    t0  = clock();
    std::string s = "1";
    int carry = 0;
    for(int i = 0; i < 1000; i++){
        for(int j = s.length() - 1; j >= 0; j--){
            int nume = (s[j] - 48)*2; // pasamos el número en codigo ASCII a entero
            nume += carry;
            carry = nume/10;
            s[j] = (nume%10) + 48; // Regresamos el número a valor en código ASCII
        }
        if(carry){
            s = std::to_string(carry) + s;
            carry = 0;
        }
    }
    int sum = sumDigits(s);
    t1  = clock();
    std::cout << "Suma de Digitos: " << sum << std::endl; // suma de los dígitos
    std::cout << "TIME: " << (double(t1-t0)/CLOCKS_PER_SEC)<<std::endl;
    long double exp = pow(2,1000);
    std::string str = std::to_string(exp);
    int suma = sumDigits(str);
    std::cout << "SUMA" << suma << std::endl;
    return 0;
}
/*
Solución:
Si bien contamos con la potencia que es pow, para valore extremadamente grantes como este caso;
por lo que nos conviene trabajar con string.
Recordar que en el codigo ASCII: 
'0' = 48
'1' = 49
'2' = 50
'3' = 51
'4' = 52
'5' = 53
'6' = 54
'7' = 55
'8' = 56
'9' = 57

2^n = 2 * 2 * 2 * 2 * ... * 2
         |----n veces---|
*/
