/*
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=15
pdf: 
*/
#include <iostream>
#include <stdlib.h>

typedef int long long Long;

Long programmingDinamic(int size){
    Long **matrix;
    matrix = (Long **)malloc(sizeof(Long *) * (size + 1));
    for(int i=0; i <= size; i++){
        matrix[i] = (Long *)malloc(sizeof(Long) * (size + 1));
        for (int j = 0; j <= size; j++) {
            matrix[i][j] = 0;
        }
    }

    matrix[0][0] = 1;

    for(int i=0; i <= size; i++){
        for (int j = 0; j <= size; j++) {
            if(i) matrix[i][j] += matrix[i - 1][j];
            if(j) matrix[i][j] += matrix[i][j - 1];
        }
    }
    return matrix[size][size];
}

Long pacalTriangle(int size){
    Long c = 1;
    for(int i = 1; i <= size; i++){
        c = c * ( size + i) / i;
    }
    return c;
}

int main() {
    Long answer1, answer2;
    int size = 20;
    answer1 = programmingDinamic(size);
    answer2 = pacalTriangle(size);
    std::cout << "Answer 1: " << answer1 << std::endl;
    std::cout << "Answer 2: " << answer2 << std::endl;
    return 0;
}

/*
Explicación:

D = Derecha y A = Abajo

**************************CASO 1 ***********************************************
Si tenemos un solo cuadrado, vamos a tener 2 formas de llegar:
| |
(D->A)(A->D)

**************************CASO 2 ***********************************************
Si tenemos una matriz de 1 x 2
| | |
Vamos a tener 3 formas de llegar:
(D->D->A)(A->D->D)(D->A->D)

**************************CASO 3 ***********************************************
Si tenemos una matriz de 2 x 1:

| |
| |

También vamos a tener 3 formas:
(A->A->D)(D->A->A)(A->D->A)

**************************CASO 4 ***********************************************
Para una matriz 2 x 2
| | |
| | |

Vamos a tener 6 formas de llegar:
(R->R->D->D) (R->D->R->D) (R->D->D->R) (D->R->R->D) (D->R->D->R) (D->D->R->R)

Este es un clásico problema de Programación Dinámicas:

Donde:
if j == 0{
    matrix[i][j] = matrix[i - 1][j] + 1;
}
if i == 0{
    matrix[i][j] = matrix[i][j - 1] + 1;
}
matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1]

Visualización:
=> 2 x 2:
| 2 | 3 |
| 3 | 6 |
=> 3 x 3:
| 2 |  3 |  4 |
| 3 |  6 | 10 |
| 4 | 10 | 20 |
=> 4 x 4
| 2 |  3 |  4 |  5 |
| 3 |  6 | 10 | 15 |
| 4 | 10 | 20 | 35 |
| 5 | 15 | 35 | 70 |

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                    Tecnica de Programación Dinámica
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

Una de las técnicas más conocidas dentro de lo que se refiere, a la programación
dinámica(PD), es el uso de lineas auxilliares dentro de las matrixes, que nos serán
utiles como casos bases:

=> 2 x 2:
| 1 | 1 | 1 |
| 1 | 2 | 3 |
| 1 | 3 | 6 |
=> 3 x 3:
| 1 |  1|  1|  1|
| 1 |  2|  3|  4|
| 1 |  3|  6| 10|
| 1 |  4| 10| 20|
=> 4 x 4
| 1 |  1|  1|  1|  1|
| 1 |  2|  3|  4|  5|
| 1 |  3|  6| 10| 15|
| 1 |  4| 10| 20| 35|
| 1 |  5| 15| 35| 70|

Estos 1 nos van a ser muy util, porque podemos reducir la condición a la siguiente manera:

// Solo si la matrix ha sido inicializada en 0 , y el valor de 
// matrix[0][0] = 1

if(i) matrix[i][j] += matrix[i - 1][j]
if(i) matrix[i][j] += matrix[i][j - 1]

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                    Relación con el triangulo e Pascal
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

Aunque no pueda parecer notorio, la matriz se va aproximando al triangulo de Pacal.
Donde la solución va a estar en el medio de la base:
        1
       1 1
      1 2 1                 => Sol: 1 x 1
     1 3 3 1
    1 4 6 4 1               => Sol: 2 x 2
   1 5 10 10 5 1
  1 6 15 20 15 6 1          => Sol: 3 x 3
 1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1      => Sol: 4 x 4

Y para calcularlo, es el valor central es con el valor de la combinatoria:

(2n)
( n)
    
2n! / ( n! * (2n - n)!) = 2n! / (n! * n!)
                        = (2n .... (n + 1)) / n!
                        = (n+1)/1 * (n+2)/2 * (n+3)/3 * ... *(n + n)/n

int answer = 1;
for(int i = 1; i <= n; i++){
    answer *= (n + i) / i;
}
*/
