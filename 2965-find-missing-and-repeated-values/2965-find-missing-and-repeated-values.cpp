class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> ans(2);
        vector<int> freq(n*n+1);

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                freq[grid[i][j]]++;
            }
        }
        int repeated = 0;
        int missing = 0;
        for(int i=1; i<=n*n; i++){
            if(freq[i]==2) repeated = i;
            else if (freq[i]==0) missing = i;
        }
        ans[0] = repeated;
        ans[1] = missing;

        return ans;

    }
};