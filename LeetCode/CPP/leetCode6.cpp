/**
 * 6. Zigzag Conversion
 * https://leetcode.com/problems/zigzag-conversion/description/
*/
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1)return s;
        vector<string> column(numRows,"");
        int j = 0, dir = -1;
        for(int i = 0; i < s.length(); i++){
            if(j == numRows - 1 || j == 0) dir *= (-1);
            column[j] += s[i];
            if(dir == 1)j++;
            else j--;
        }
        string sol;
        for(auto &it: column) sol += it;
        return sol;
    }
};
