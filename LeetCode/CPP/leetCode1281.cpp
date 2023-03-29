/**
 * 1281. Subtract the Product and Sum of Digits of an Integer
 * https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
*/
class Solution {
public:
    int subtractProductAndSum(int n) {
        // only 1 digit
        if( n < 10 ) return 0; 
        int sum = 0, mul = 1;
        while(n){
            sum += n % 10;
            mul *= n % 10;
            n /= 10;
        }
        // It doesn't matter which is bigger
        return mul - sum;
    }
};
