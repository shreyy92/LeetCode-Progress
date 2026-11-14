class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int dif = INT_MAX;
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                for(int k = j+1; k < nums.size(); k++) {

                    int sum = nums[i] + nums[j] + nums[k];

                    int close = abs(sum - target);

                    if(close < dif) {
                        dif = close;
                        ans = sum;
                    }
                }
            }
        }

        return ans;
    }
};
