class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();
        
        while(s.size()!=2){
            string ans;
            for(int i=0; i<s.size()-1; i++){
                ans += (s[i]+s[i+1])%10;
            }
            s = ans;
        }
        if(s[0]==s[1]) return true;
        else return false;
    }
};