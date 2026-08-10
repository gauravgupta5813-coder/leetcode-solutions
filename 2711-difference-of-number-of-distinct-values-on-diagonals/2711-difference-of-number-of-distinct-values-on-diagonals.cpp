class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n,0));

        for(int r=0; r<m; r++){
            for(int c=0; c<n; c++){
                unordered_set<int> leftAbove;
                int nr = r-1, nc = c-1;
                while(nr>=0 && nc>=0){
                    leftAbove.insert(grid[nr][nc]);
                    nr--;
                    nc--;
                }

                unordered_set<int> rightBelow;
                nr = r+1, nc = c+1;
                while(nr<m && nc<n){
                    rightBelow.insert(grid[nr][nc]);
                    nr++;
                    nc++;
                }

                ans[r][c] = abs((int)leftAbove.size()- (int)rightBelow.size());
            }
        }
        return ans;
    }
};