class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int x = 0;

        for(char c: s){
            if(c == '('){
                if(x > 0){
                    ans += c;
                }
                x++;
            } else {
                x--;
                if(x > 0){
                    ans += c;
                }
            }
        }
        return ans;
    }
};