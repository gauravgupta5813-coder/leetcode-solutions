class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        vector<bool> seen(128, false);
        
        for (char c : password) {
            if (!seen[c]) {
                seen[c] = true;
                
                if (c >= 'a' && c <= 'z') ans += 1;
                else if (c >= 'A' && c <= 'Z') ans += 2;
                else if (c >= '0' && c <= '9') ans += 3;
                else ans += 5; 
            }
        }
        
        return ans;
    }
};