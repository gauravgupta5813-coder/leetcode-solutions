class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();

        int i = 0;
        int j = 0;

        for(int k=0; k<n; k++){
            int next = j;
            if(j<m && s[j]==t[k]){
                next = max(next, j+1);
            }
            if(i<m){
                next = max(next, i+1);
            }
            if(i<m && s[i]==t[k]){
                i++;
            }
            j = next;
        }
    return j>=m;
    }
};