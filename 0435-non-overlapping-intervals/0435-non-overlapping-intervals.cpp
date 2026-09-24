class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        int c = 0;
        sort(in.begin(), in.end());

        int s1 = in[0][0];
        int e1 = in[0][1];
        for (int i = 1; i < in.size(); i++) {

            int s2 = in[i][0];
            int e2 = in[i][1];

            if (s2 < e1) {
                c++;

                e1 = min(e1, e2);
            } else {
                s1 = s2;
                e1 = e2;
            }
        }
        return c;
    }
};