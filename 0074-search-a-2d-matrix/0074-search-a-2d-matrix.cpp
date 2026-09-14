class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int r = m.size();
        int c = m[0].size();

        int l=0;
        int h=r*c-1;

        while(l<=h){
            int mid = l + (h - l) / 2;
            int row = mid/c;
            int col = mid%c;

            if(m[row][col]==target){
                return true;
            }
            else if (m[row][col]<target){
                l = mid+1;
            } else{
                h = mid -1;
            }
        }
        return false;
    }
};