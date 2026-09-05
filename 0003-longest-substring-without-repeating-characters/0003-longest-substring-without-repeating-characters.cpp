class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string ans = "";
        string sum = "";

        for(int i = 0; i < s.size(); i++) {

            
            if(find(sum.begin(), sum.end(), s[i]) == sum.end()) {
                sum += s[i];
            }

       
            else {
              
                if(sum.length() > ans.length()) {
                    ans = sum;
                }

                
                while(find(sum.begin(), sum.end(), s[i]) != sum.end()) {
                    sum.erase(0, 1);
                }

               
                sum += s[i];
            }
        }

      
        if(sum.length() > ans.length()) {
            ans = sum;
        }

        return ans.length();
    }
};