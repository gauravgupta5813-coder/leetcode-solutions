class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for (const string& word : words) {
            if (word.starts_with(pref)) {
                ans++;
            }
        }
        return ans;
    }
};