class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        sort(words.begin(), words.end(), [](const string& a, const string& b) {
            if (a.empty()) return true;
            if (b.empty()) return false;
        
            return a.back() < b.back();
        });
        string ans;

        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].size()-1; j++){
                ans += words[i][j];
            }
            if(i<words.size()-1) ans += ' ';
        }
        
        return ans;
    }
};