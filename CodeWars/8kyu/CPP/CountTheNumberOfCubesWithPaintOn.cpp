// src: https://www.codewars.com/kata/5763bb0af716cad8fb000580/
int countSquares(int cuts){
    if(cuts == 0) return 1;
    return cuts * cuts * 6 + 2;
}
/*
number of painted squares:
  pow(cuts + 1,3) 
number of unpainted squares:
  pow(cuts - 1, 3)
Total number of squares:
  pow(cuts + 1, 3) - pow(cuts - 1,3)
  similar to the following equation: (a + b)^3 - (a - b)^3 == 6a^2b * 2b^3
  b==1, a == cuts
  =>Solution equation: 6 * cuts * cuts + 2
*/
