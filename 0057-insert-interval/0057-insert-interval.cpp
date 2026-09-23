class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& newi) {
        vector<vector<int>> ans;

        int sn = newi[0];
        int en = newi[1];

        for (int i = 0; i < in.size(); i++) {

            int si = in[i][0];
            int ei = in[i][1];

            // Existing interval is completely before new interval
            if (ei < sn) {
                ans.push_back({si, ei});
            }

            // Existing interval is completely after new interval
            else if (si > en) {
                ans.push_back({sn, en});

                // Now this interval becomes the current interval
                sn = si;
                en = ei;
            }

            // Overlap
            else {
                sn = min(sn, si);
                en = max(en, ei);
            }
        }

        // Store final current interval
        ans.push_back({sn, en});

        return ans;
    }
};