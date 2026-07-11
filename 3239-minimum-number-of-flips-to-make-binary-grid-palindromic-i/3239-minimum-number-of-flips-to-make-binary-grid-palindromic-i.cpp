class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int row_flips = 0;
        int col_flips = 0;

        for(int i=0; i<m; i++){
            int x = 0;
            int y = n-1;
            while(x<y){
                if (grid[i][x] != grid[i][y]) {
                    row_flips++;
                }
                x++;
                y--;
            }
        }

        for(int i=0; i<n; i++){
            int x = 0;
            int y = m-1;
            while(x<y){
                if (grid[x][i] != grid[y][i]) {
                    col_flips++;
                }
                x++;
                y--;
            }
        }
        
        return min(row_flips, col_flips);
    }
};