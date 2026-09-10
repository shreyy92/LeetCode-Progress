class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> ans;
        int top = 0;
        int bottom = m.size()-1;

        int left = 0;
        int right = m[0].size()-1;

        while(left<=right && top<=bottom){
            for(int j=left;j<=right;j++){
                ans.push_back(m[top][j]);
            }
top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(m[i][right]);
            }
right--;
            if(top<=bottom){
                for(int j=right;j>=left;j--){
                    ans.push_back(m[bottom][j]);
                }
            }
            bottom--;
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(m[i][left]);
                }
            }
            left++;

        }
        return ans;
    }
};