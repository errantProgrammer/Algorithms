// src: https://www.codewars.com/kata/5a4138acf28b82aa43000117
#include <vector>
#include <limits.h>

using namespace std; 

int adjacentElementsProduct(vector<int> inputArray){
    int mulMax = INT_MIN,j = 1;
    int n = inputArray.size();
    while(j < n ){
      int mulPar = inputArray[j] * inputArray[j - 1]; // Multiplicación de pares
      mulMax = mulPar > mulMax ? mulPar : mulMax;
      j++;
    }
    return mulMax;
}
