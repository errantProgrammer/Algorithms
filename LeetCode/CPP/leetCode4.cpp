/**
 *4. Median of Two Sorted Arrays
 * https://leetcode.com/problems/median-of-two-sorted-arrays/description/
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol;
        int i = 0;
        int j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                sol.push_back(nums1[i++]);
            }else{
                sol.push_back(nums2[j++]);
            }
        }
        while(i < nums1.size())
            sol.push_back(nums1[i++]);
        while(j < nums2.size())
            sol.push_back(nums2[j++]);
        int cant = sol.size(); // Cantidad de datos del vector solución
        if(cant % 2 == 1 || cant == 1){
            return (double)(sol[cant / 2]);
        }else{
            return (double)(sol[cant / 2] + sol[cant/2 - 1]) / 2;
        }

    }
};
