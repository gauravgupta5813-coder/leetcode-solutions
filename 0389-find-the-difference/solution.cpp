class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1 = 0;
        int sum2 = 0;

        for(int i=0, j=0; i<s.size(), j<t.size(); i++, j++){
            sum1 += static_cast<int>(s[i]);;
            sum2 += static_cast<int>(t[i]);;
        }
        return (sum2-sum1);
    }
};
