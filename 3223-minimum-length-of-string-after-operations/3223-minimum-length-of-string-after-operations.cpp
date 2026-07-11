class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26,0);

        for(char c: s){
            freq[c-'a']++;
        }
        int count = s.size();
        for(int i=0; i<26; i++){
            while(freq[i]>=3){
                freq[i] -= 2;
                count-=2;
            }
        }
        return count;
    }
};