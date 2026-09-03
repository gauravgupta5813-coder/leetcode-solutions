class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        int i=0;
        int j=n-1;

        while(i<j){
            int c1 = s[i]-'0';
            int c2 = s[j]-'0';
            
            if(c1>c2){
                s[i] = s[j];
            }
            else {
                s[j] = s[i]; 
            }
            i++;
            j--;
        }
        return s;
    }
};