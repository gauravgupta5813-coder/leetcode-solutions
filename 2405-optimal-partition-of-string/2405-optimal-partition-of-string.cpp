class Solution {
public:
    int partitionString(string s) {
        int count = 1; 
        unordered_set<char> seen;
        
        for (char ch : s) {
            if (seen.count(ch)) {
                count++;
                seen.clear();
            }
            seen.insert(ch);
        }
        
        return count;
    }
};