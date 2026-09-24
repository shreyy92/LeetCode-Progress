class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
sort(p.begin(),p.end());
        int c = 1;

        int s1 = p[0][0];
        int e1 = p[0][1];


        for (int i = 1; i < p.size(); i++) {
           int  s2 = p[i][0];
           int  e2 = p[i][1];
            if (s2 <= e1) {
              

                e1 = min(e1, e2);
               
            }
            
             else {
            c++;
                s1 = s2;
                e1 = e2;
               
            }
        }
       return c;
       
       

    }
};