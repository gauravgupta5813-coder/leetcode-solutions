class Solution {
public:
    int minFlips(string target) {
        char curr = '0';
        int ans = 0;

        for(int i=0; i<target.size(); i++){
            if(target[i] != curr){
                ans++;
                if(curr == '0') curr = '1';
                else curr = '0';
            }
        }
        return ans;
    }
};