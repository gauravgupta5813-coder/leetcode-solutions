class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> freq(26,0);
        for(char c: s){
            freq[c-'a']++;
        }
        string result;

        for(char c: order){
            result.append(freq[c-'a'],c);
            freq[c-'a'] = 0;
        }

        for(int i=0; i<26; i++){
            if(freq[i]>0){
                result.append(freq[i], 'a'+ i);
            }
        }
        return result;
    }
};