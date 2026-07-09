class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> freq;

        for(char c:s){
            freq[c]++;
        }
        
        vector<pair<int, char>> sorted_chars;
        for(auto& p: freq){
            sorted_chars.push_back({p.second, p.first});
        }
        sort(sorted_chars.rbegin(), sorted_chars.rend());

        string ans = "";
        for (auto& p : sorted_chars) {
            ans.append(p.first, p.second);
        }
        return ans;
    }
};