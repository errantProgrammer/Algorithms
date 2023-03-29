/*
Problema: 30
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=30
pdf: NO
Answer: 443839
 */
#include <iostream>
#include <cmath>


int main() {    
    int sum = 0;
    for(int i = 2; i <= 6 * 9 * 9 * 9 * 9 * 9 ;i++){
        int thisSum = 0;
        int aux = i;
        while(aux){
            int digit = aux % 10;
            aux /= 10;
            int power = pow(digit,5);
            thisSum += power;
        }
        if(thisSum == i) sum+= i;
    }
    std::cout << sum << std::endl;
    return 0;
}
/*Explicación:
 * Calculemos la sumá maxima que podriamos tener para `X`digitos:
 * 
 * dig = digitos
 * dig 1 => 1 * 9^5 =  59049
 * dig 2 => 2 * 9^5 = 118098
 * dig 3 => 3 * 9^5 = 177147
 * dig 4 => 4 * 9^5 = 236196
 * dig 5 => 5 * 9^5 = 295245
 * dig 6 => 6 * 9^5 = 354294
 * dig 7 => 7 * 9^5 = 413343 *WIN*
 * 
 * Para 7 digitos, es imposible generar un número de 7 digitos con la suma de
 * quint potencia de cada dígito del número:
 * 
 * Por lo que el máximo número que podemos evaluar es:
 *  999999 => 6 * 9^5 == 354294
 */