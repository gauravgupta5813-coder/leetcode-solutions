class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();

        vector<int> isAllowed(26,0);
        for(char c: allowed){
            isAllowed[c-'a'] = 1;
        }
        int count = 0;

        for(const string& word: words){
            int isConsistent = 1;

            for(char c: word){
                if(!isAllowed[c-'a']){
                    isConsistent = 0;
                    break;
                }
            }

            if(isConsistent){
                count++;
            }
        }
        return count;
    }
};