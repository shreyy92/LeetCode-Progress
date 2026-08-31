class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ans = "";
        int j=0;
        for(int i=0;i<t.size();i++){
            if(j<t.size() && t[i] == s[j]){
                ans+=t[i];
                j++;
            }
            else{
continue;
            }
        }
        if(s==ans){
            return true;
        }
        return false;
    }
};