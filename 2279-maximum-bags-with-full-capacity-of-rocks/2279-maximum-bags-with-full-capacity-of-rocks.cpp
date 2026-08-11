class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks,
                    int additionalRocks) {
        int n = rocks.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            capacity[i] -= rocks[i];
        }

        sort(capacity.begin(), capacity.end());

        for (int i = 0; i < n; i++) {
            if (capacity[i] > additionalRocks)
                break;

            additionalRocks -= capacity[i];
            count++;
        }
        return count;
    }
};