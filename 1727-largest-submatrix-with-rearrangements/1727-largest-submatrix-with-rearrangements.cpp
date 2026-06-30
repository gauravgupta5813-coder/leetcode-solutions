class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int maxArea = 0;

        for (int i = 1; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 1) {
                    matrix[i][j] += matrix[i - 1][j];
                }
            }
        }

        for(int i=0; i<m; i++){
            vector<int> curr = matrix[i];
            sort(curr.begin(), curr.end(), greater<int>());

            for(int j=0; j<n; j++){
                if(curr[j]==0) break;

                int width = j+1;
                int height = curr[j];
                maxArea = max(maxArea, width*height);
            }
        }
        return maxArea;
    }
};