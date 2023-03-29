/**
 * 28. Find the Index of the First Occurrence in a String
 * https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        // Caso base
        if(needle.size() > haystack.size()) return -1;
        int i = 0, j = 0,k = 0;
        while(i < haystack.size()){
            if(haystack[k] != needle[j]){
                i++;
                k = i,
                j = 0; // Reiniciamos la busqueda
                continue;
            }
            k++;
            j++;
            if(j == needle.size()){
                break;
            }
        }
        if(haystack.size() - needle.size() < i) return -1;
        return i;
    }
};
