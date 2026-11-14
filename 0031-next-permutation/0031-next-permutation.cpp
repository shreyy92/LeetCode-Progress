class Solution {
public:
    void nextPermutation(vector<int>& nums) {
   
    
    int n = nums.size();

for(int j = n-1; j > 0; j--) {

    if(nums[j] > nums[j-1]) {

        int k = n-1;

        while(nums[k] <= nums[j-1]) {
            k--;
        }

        swap(nums[j-1], nums[k]);

        reverse(nums.begin()+j, nums.end());

        return;
    }
}

reverse(nums.begin(), nums.end());
    }
};