class Solution {
public:
    static const int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        vector<int> up(m), down(m);

        for (int j = 0; j < m; j++) {
            up[j] = j;
            down[j] = m - j - 1;
        }

        for (int len = 3; len <= n; len++) {
            vector<int> prefUp(m + 1, 0);
            vector<int> prefDown(m + 1, 0);

            for (int i = 0; i < m; i++) {
                prefUp[i + 1] = (prefUp[i] + up[i]) % MOD;
                prefDown[i + 1] = (prefDown[i] + down[i]) % MOD;
            }

            vector<int> newUp(m), newDown(m);

            for (int x = 0; x < m; x++) {
                newUp[x] = prefDown[x];

                newDown[x] =
                    (prefUp[m] - prefUp[x + 1] + MOD) % MOD;
            }

            up = move(newUp);
            down = move(newDown);
        }

        long long ans = 0;

        for (int i = 0; i < m; i++) {
            ans = (ans + up[i] + down[i]) % MOD;
        }

        return ans;
    }
};