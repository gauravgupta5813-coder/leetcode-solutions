class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int x = 0;
        int y = 0;

        for(char c: s){
            if(c=='a') x++;
            else y++;
        }

        return abs(x-y);
    }
};