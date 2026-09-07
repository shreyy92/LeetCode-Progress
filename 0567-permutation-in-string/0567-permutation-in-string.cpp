class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return 0;
        }
        int k =  s1.size();
        sort(s1.begin(),s1.end());
        for(int i=0;i<=s2.size()-k;i++){
            string w = s2.substr(i,k);
            sort(w.begin(),w.end());
            if(w==s1){
                return true;
            }
            
        }
        return false;
    }
};