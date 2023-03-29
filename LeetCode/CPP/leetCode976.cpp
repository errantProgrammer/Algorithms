/**
 * 976. Largest Perimeter Triangle
 * https://leetcode.com/problems/largest-perimeter-triangle/description/
*/
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        // Order descending
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size()-2;i++)
             if(nums[i+2]+nums[i+1]>nums[i]) // Propiety of triangles
                return nums[i+2]+nums[i+1]+nums[i]; // max value
        // case error
        return 0;
    }
};
