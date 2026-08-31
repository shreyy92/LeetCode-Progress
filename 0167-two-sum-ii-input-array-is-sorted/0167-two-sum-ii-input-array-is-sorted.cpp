class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int j=nums.size()-1;
        int i=0;
while(nums[i] + nums[j] != target){
    if(nums[i] + nums[j] > target){
        j--;
    } else{
        i++;
    }
}
    ans.push_back(i+1); 
    ans.push_back(j+1); 
    return ans;
    }
};