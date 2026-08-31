class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        vector<int> freq(k, 0);

        int sum = 0;
        int count = 0;

        freq[0] = 1;

        for(int x : nums) {

            sum += x;

            int rem = sum % k;

            if(rem < 0) {
                rem += k;
            }

            count += freq[rem];

            freq[rem]++;
        }

        return count;
    }
};