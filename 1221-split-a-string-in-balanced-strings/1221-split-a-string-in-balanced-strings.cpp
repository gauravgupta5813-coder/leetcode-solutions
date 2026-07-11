class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        int x = 0;
        int count = 0;

        for(int i=0; i<n; i++){
            if(s[i]=='L'){
                x++;
            }
            else x--;
            if(x==0) count++;
        }
        return count;
    }
};