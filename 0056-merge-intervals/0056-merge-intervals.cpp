class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        sort(in.begin(),in.end());

        int s = in[0][0];
        int e = in[0][1];

        for(int i=1;i<in.size();i++){
            if(in[i][0]<=e){
                e=max(e,in[i][1]);
            }
            else{
                ans.push_back({s,e});
                s=in[i][0];
                e=in[i][1];
            }
        }
        ans.push_back({s,e});
        return ans;
    }
};