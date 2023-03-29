/**
 * 1779. Find Nearest Point That Has the Same X or Y Coordinate
 * https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/description/
*/
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int M = INT_MAX, soln = -1;
        for(int i = 0; i < points.size(); i++){
            // 
            if(x == points[i][0] || y == points[i][1]){
                // Calulation Manhattan distance
                int distance = abs(y - points[i][1]) + abs(x - points[i][0]);

                // soln, save the index with minor distance
                // It does not update the index, because we need the minor index
                soln = M > distance ? i : soln;
                // M store previus Manhattan distance, and store the minor distance
                M = M < distance ? M : distance;
            }
        }
        return soln;
    }
};
