class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int waviness = 0;
        for(int i=num1; i<=num2; i++){
            string s = to_string(i);
            int x = s.size();
            for(int j=1; j<x-1; j++){
                if(s[j]>s[j+1] && s[j]>s[j-1]){
                    waviness++;
                }
                else if(s[j]<s[j+1] && s[j]<s[j-1]){
                    waviness++;
                }
            }
        }
        return waviness;
    }
};