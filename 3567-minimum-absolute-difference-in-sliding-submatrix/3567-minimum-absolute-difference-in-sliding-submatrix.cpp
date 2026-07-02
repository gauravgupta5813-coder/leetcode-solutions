class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        int res_rows = m - k + 1;
        int res_cols = n - k + 1;
        vector<vector<int>> ans(res_rows, vector<int>(res_cols));

        for (int i = 0; i < res_rows; i++) {
            for (int j = 0; j < res_cols; j++) {
                vector<int> elements;
                elements.reserve(k * k);
                for (int r = i; r < i + k; ++r) {
                    for (int c = j; c < j + k; ++c) {
                        elements.push_back(grid[r][c]);
                    }
                }

                sort(elements.begin(), elements.end());

                int min_diff = INT_MAX;
                bool found_distinct_pair = false;

                for (size_t idx = 1; idx < elements.size(); ++idx) {
                    if (elements[idx] != elements[idx - 1]) {
                        min_diff =
                            min(min_diff, elements[idx] - elements[idx - 1]);
                        found_distinct_pair = true;
                    }
                }

                if (!found_distinct_pair) {
                    min_diff = 0;
                }

                ans[i][j] = min_diff;
            }
        }
        return ans;
    }
};