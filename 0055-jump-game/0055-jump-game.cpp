class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (i > reach) {
                return false;
            }

            int j = nums[i];

            while (j > 0) {
                if (i + j >= nums.size() - 1) {
                    return true;
                }
                j--;
            }

            reach = max(reach, i + nums[i]);
        }

        return true;
    }
};