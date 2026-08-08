class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26) return false;
        
        vector<int> freq(26,0);
        
        for(char c: sentence){
            freq[c-'a']++;
        }
        for(int x: freq){
            if(x == 0) return false;
        }
        return true;
    }
};