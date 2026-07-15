class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int max_words = 0;

        for(int i=0; i<n; i++){
            int spaceCount = 0;
            for(char c: sentences[i]){
                if(c == ' '){
                    spaceCount++;
                }
            }
            max_words = max(spaceCount+1, max_words);
        }
        return max_words;
    }
};