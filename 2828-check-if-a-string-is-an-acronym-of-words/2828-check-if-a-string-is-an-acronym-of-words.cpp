class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = words.size();
        if(n != s.size()) return false;

        int flag = 0;
        for(int i=0; i<n; i++){
            if(words[i][0]!=s[i]){
                flag = 1;
                break;
            }
        }
        return flag == 0;
    }
};