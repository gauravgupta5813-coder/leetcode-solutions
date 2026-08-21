class Solution {
public:
    string replaceDigits(string s) {
        int n = s.size();
        for(int i=0; i<n; i+=2){
            int c = s[i+1];
            s[i+1] = s[i] + (c-'0');
        }
        return s;
    }
};