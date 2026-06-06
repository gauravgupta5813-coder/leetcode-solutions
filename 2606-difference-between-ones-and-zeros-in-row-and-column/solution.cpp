class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<int> onesRow(m);
    vector<int> onesCol(n);
    vector<int> zerosRow(m);
    vector<int> zerosCol(n);
    
    vector<vector<int>> diff(m, vector<int>(n));


    for(int i=0; i<m; i++){
        onesRow[i] = 0;
        zerosRow[i] = 0;
        for(int j=0; j<n; j++){
            if(grid[i][j] == 1){
                onesRow[i]++;
            } else zerosRow[i]++;
        }
    }
    for(int i=0; i<n; i++){
        onesCol[i] = 0;
        zerosCol[i] = 0;
        for(int j=0; j<m; j++){
            if(grid[j][i] == 1){
                onesCol[i]++;
            } else zerosCol[i]++;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
        }
    }
    return diff;
    }
};
