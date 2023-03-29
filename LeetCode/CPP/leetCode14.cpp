/**
 * 14. Longest Common Prefix
 * https://leetcode.com/problems/longest-common-prefix/description/
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sol="";
        sort(strs.begin(),strs.end());
        /* 
        Input:
        ["flower","flow","flight"]
        Output:
        ["flight","flow","flower"]
        */
        // Ya solo tenemos que comparar entre la primera palabra, y la última palabra
        string word1=strs[0];
        string word2=strs[strs.size()-1]; 
        
        for(int i=0,j=0;i<word1.size() && j< word2.size();i++){
                if(word1[i]==word2[j]){
                    sol+=word2[j];
                    j++;
                }
                else break;
        }
        return sol;
    }
};
