class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (char c : s) {
            freq1[c - 'a']++;
        }
        for (char c : t) {
            freq2[c - 'a']++;
        }
        int sum = 0;
        for (int i = 0; i < 26; i++) {
            if (freq1[i] < freq2[i]) {
                sum += freq2[i] - freq1[i];
            }
        }
        return sum;
    }
};