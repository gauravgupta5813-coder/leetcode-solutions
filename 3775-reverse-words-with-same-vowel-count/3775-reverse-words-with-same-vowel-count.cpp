class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }
        
        auto countVowels = [](const string& w) {
            int count = 0;
            for (char c : w) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    count++;
                }
            }
            return count;
        };
        
        int targetVowels = countVowels(words[0]);

        for (size_t i = 1; i < words.size(); ++i) {
            if (countVowels(words[i]) == targetVowels) {
                reverse(words[i].begin(), words[i].end());
            }
        }
        
        string result = "";
        for (size_t i = 0; i < words.size(); ++i) {
            if (i > 0) result += " ";
            result += words[i];
        }
        
        return result;
    }
};