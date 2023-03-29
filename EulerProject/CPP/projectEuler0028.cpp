/*
Problema: 28
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=28
pdf: no
Answer: 669171001
 */
#include <iostream>
#include <vector>
#include <numeric>

int main() {
    // Mi método de resolución
    int n = 1001;
    std::vector<int> list((2 * n) - 1, 0);
    list[0] = 1;
    for (int i = 1; i <= 2 * (n - 1); i++) {
        int sum = 2 * (1 + (i - 1) / 4);
        list[i] = sum + list[i - 1];
    }
    int suma = std::accumulate(list.begin(), list.end(), 0);
    std::cout << suma << std::endl;
    // Buscando otra formas de resolver el problema, me tope con está
    // lamentablemente no logré calcular la ecucación
    // que da lugar a la siguiente formula
    int sum2 = 1;
    for (int i = 3; i <= 1001; i += 2)
        sum2 += 4 * i * i - 6 * (i - 1);
    std::cout << sum2 << std::endl;
    
    return 0;
}
/* Expandamos el ejemplo para una matriz de 7 x 7
 *   43 44  45  46  47  48  49  
 *   42 21  22  23  24  25  26
 *   41 20   7   8   9  10  27
 *   40 19   6   1   2  11  28
 *   39 18   5   4   3  12  29
 *   38 17  16  15  14  13  30
 *   37 36  35  34  33  32  31
 * 
 * Se nos pide sumar los números que estén en las diagonales, ordenemolos de forma ascendente
 * 0    1    2    3    4     5     6     7     8     9    10    11    12 => Index
 * 1 -> 3 -> 5 -> 7 -> 9 -> 13 -> 17 -> 21 -> 25 -> 31 -> 37 -> 43 -> 49
 * Existe relación en grupos de 4
 *  int sum = 2;
 *  1 + 2 = 3
 *  3 + 2 = 5
 *  5 + 2 = 7
 *  7 + 2 = 9
 *  sum += 2 // 4
 *  9 + 4 = 13
 * 13 + 4 = 17
 * 17 + 4 = 21
 * 21 + 4 = 25
 *  sum+= 2 //4
 * 25 + 6 = 31
 * 31 + 6 = 27
 * 37 + 6 = 43
 * 43 + 6 = 49
 * 2 + 2 = 4 // La suma
 * 
 * Entonces, para encontrar la suma sería de la siguiente manera:
 * F[i] = F[ i - 1] + sum; Pasemos a hallar una relación para 'sum'
 * 
 * Encontremos una relación de 'sum':
 * para los valores de los índices:
 * i = {1,2,3,4} => sum vale 2
 * i = {5,6,7,8} => sum vale 4
 * i = {9,10,11,12} => sum vale 6
 * 
 * {0,1,2,3} / 4 = 0 =>  * ( 0 + 1) * 2 = 2
 * {4,5,6,7} / 4 = 1 =>  * ( 1 + 1) * 2 = 4
 * {8,9,10,11} / 4 = 2 =>  * (2 + 1 ) * 2 = 6
 * 
 * Similar a decir que:
 * sum = 2 * ( 1 + (i - 1) / 4)
 * 
 * Solución final:
 * F[0] = 1;
 * F[i] = F[i - 1] + ( 2* (1 + ( i - 1) / 4); i >= 1;
 * 
 * Listo encontramos una ecuación que nos permite encontrar todos los número previos
 * Solo tenemos que sumar todos los números y listo.
 */
