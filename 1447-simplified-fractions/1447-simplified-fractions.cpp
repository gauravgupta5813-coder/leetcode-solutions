class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        
        int den = 2;
        vector<string> ans;
        while (den <= n) {
            int num = 1;
            while (num < den) {
                if(gcd(num, den) == 1){
                    ans.push_back(to_string(num) + "/" + to_string(den));
                }
                num++;
            }
            den++;
        }
        return ans;
    }
};