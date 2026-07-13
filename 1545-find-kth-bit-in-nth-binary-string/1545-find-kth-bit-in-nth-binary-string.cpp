class Solution {
public:
    char findKthBit(int n, int k) {
        string current = "0";

        for (int i = 1; i < n; i++) {
            string inverted = current;
            for (char& c : inverted) {
                c = (c == '0') ? '1' : '0';
            }
            reverse(inverted.begin(), inverted.end());

            current = current + "1" + inverted;
        }
        return current[k-1];
    }
};