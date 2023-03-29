/**
 * 912. Sort an Array
 * https://leetcode.com/problems/sort-an-array/
*/
class Solution {
public:
    void merge(vector<int> &nums,int ini,int med,int end){
        if(ini >= end)return;
        int l = ini,
        r = med + 1,
        k = 0,
        size = end - ini + 1;
        vector<int> sorted(size,0);
        while (l <= med and r <= end)
            sorted[k++] = nums[l] < nums[r] ? nums[l++] : nums[r++];
        while (l <= med) 
            sorted[k++] = nums[l++];
        while (r <= end) 
            sorted[k++] = nums[r++];
        for (k = 0; k < size; k++)
            nums[k + ini] = sorted[k];
    }
    void mergeSort(vector<int> &nums,int ini,int end){
        if(ini >= end) return;
        auto med =ini +  (end - ini) / 2;
        mergeSort(nums,ini,med);
        mergeSort(nums,med + 1,end);
        merge(nums,ini,med,end);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size() - 1);
        return nums;
    }
};
