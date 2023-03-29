/**
 * 1523. Count Odd Numbers in an Interval Range
 * https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/
*/
class Solution {
public:
    int countOdds(int low, int high) {
        // Cantidad de impares antes que low(no se cuenta a este)
        int cantL = low % 2 == 0 ? low/2 : (low/2);
        // Cantidad de pares impares antes que high(si se cuenta a este) Y por defeto ya conto a low
        int cantH = high % 2 == 0 ? high/2 : (high/2)  + 1;
        // La resta, nos da la cantidad total
        return cantH - cantL;
    }
};
