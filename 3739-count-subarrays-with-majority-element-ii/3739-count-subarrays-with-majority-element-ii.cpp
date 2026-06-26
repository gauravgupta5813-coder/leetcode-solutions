#include <algorithm>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> bit;
    int size;

    void update(int idx, int val) {
        for (; idx <= size; idx += idx & -idx) {
            bit[idx] += val;
        }
    }

    int query(int idx) {
        int sum = 0;
        for (; idx > 0; idx -= idx & -idx) {
            sum += bit[idx];
        }
        return sum;
    }

public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int val = (nums[i] == target) ? 1 : -1;
            pref[i + 1] = pref[i] + val;
        }
        vector<int> ranks = pref;
        sort(ranks.begin(), ranks.end());
        ranks.erase(unique(ranks.begin(), ranks.end()), ranks.end());

        size = ranks.size();
        bit.assign(size + 1, 0);

        long long ans = 0;

        for (int k = 0; k <= n; k++) {
            int rank = lower_bound(ranks.begin(), ranks.end(), pref[k]) -
                       ranks.begin() + 1;

            ans += query(rank - 1);

            update(rank, 1);
        }

        return ans;
    }
};