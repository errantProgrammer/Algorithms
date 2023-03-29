/**
 * 7. Reverse Integer
 * https://leetcode.com/problems/reverse-integer/description/
*/
class Solution {
public:
    int reverse(int x) {
        if( x == INT_MAX || x == INT_MIN) return 0;
        int sign = 1;
        if(x < 0){
            sign = -1;
            x *= -1;
        } 
        int num = 0;
        while( x > 0){
            if ((num > INT_MAX / 10) || ((num == INT_MAX / 10) && (x % 10 > 7)))
                return 0;
            num = (num * 10)  + (x % 10);
            x /= 10;
        }
        return num * sign;
    }
};
