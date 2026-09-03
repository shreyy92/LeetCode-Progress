class Solution {
public:
    int maxVowels(string s, int k) {
        int c=0;
        string ans = "";
        

        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                c++;
            }
        ans+=s[i];
        }

        int m = c;
        for(int i=k;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                c++;
            }
            ans+=s[i];

             if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'){
                c--;
            }
            ans.erase(0,i);
 m = max(m,c);
        }
        return m;
    }
};