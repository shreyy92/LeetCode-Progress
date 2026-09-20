class Solution {
public:
bool canship(vector<int> w,int c,int days){
    int day = 1;
    int curr = 0;

    for(int i : w){
        if(curr + i>c){
            day++;
            curr=0;
        }
        curr+=i;
    }
    return day<=days;
}
    int shipWithinDays(vector<int>& w, int d) {
        int l = *max_element(w.begin(),w.end());
        int h = accumulate(w.begin(),w.end(),0);

        while(l<h){
            int m = l + (h-l)/2;

            if(canship(w,m,d)){
                h = m;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
};