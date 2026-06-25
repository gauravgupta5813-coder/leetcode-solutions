class Solution {
public:
    string stringHash(string s, int k) {
        string result;
        int n = s.size();

        for(int i=0; i<n/k; i++){
            int sum = 0;
            for(int j=k*i; j<k*i+k; j++){
                sum += (s[j] - 'a');
            }
            result.push_back(sum%26 + 'a');
        }
        return result;
    }
};