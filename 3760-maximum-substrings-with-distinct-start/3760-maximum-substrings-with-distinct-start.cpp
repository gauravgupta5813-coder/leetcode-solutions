class Solution {
public:
    int maxDistinct(string s) {
        bool seen[26] = {false};
        int count =  0;

        for(char c: s){
            if(!seen[c-'a']){
                seen[c-'a'] = true;
                count++;
            }
        }
        return count;
    }
};