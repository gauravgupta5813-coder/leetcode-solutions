class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        int x = 0;
        for(int i=0; i<s.size(); i++){
            if(x < spaces.size() && i == spaces[x]){
                ans += ' ';
                x++;
            }
            ans += s[i];
        }
        return ans;
    }
};