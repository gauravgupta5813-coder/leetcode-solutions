class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> broken(26,false);

        for(char c: brokenLetters){
            broken[c-'a'] = true;
        }
        int count = 0;
        int flag = 0;
        text += ' ';
        for(char c: text){
            if(c==' '){
                if(flag == 0){
                    count++;
                }
                flag = 0;
            }
            else {
                if(broken[c-'a']==true){
                    flag = 1;
                }
            }
        }
        return count;
    }
};