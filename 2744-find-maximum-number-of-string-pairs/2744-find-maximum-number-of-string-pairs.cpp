class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        for(int i=0; i<n; i++){
            string s = words[i];
            reverse(s.begin(), s.end());
            for(int j=i+1; j<n; j++){
                if(words[j] == s){
                    count++;
                }
            }
        }
        return count;
    }
};