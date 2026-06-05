class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        for(int r=0; r<n; r++){
            vector<int> diag;
            int i=r, j=0;
            while(i<n && j<n){
                diag.push_back(grid[i][j]);
                i++;
                j++;
            }
            sort(diag.rbegin(), diag.rend());

            i=r; j=0;
            for(int k=0; k<diag.size(); k++){
                grid[i++][j++] = diag[k];
            }
        }

        for(int c=1; c<n; c++){
            vector<int> diag;
            int i=0, j=c;
            while(i<n && j<n){
                diag.push_back(grid[i][j]);
                i++;
                j++;
            }
            sort(diag.begin(), diag.end());

            i=0; j=c;
            for(int k=0; k<diag.size(); k++){
                grid[i++][j++] = diag[k];
            }
        }
        return grid;
    }
};
