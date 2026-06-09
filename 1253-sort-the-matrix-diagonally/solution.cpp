class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        for(int r=0; r<m; r++){
            vector<int> diag;
            int i=r, j=0;
            while(i<m && j<n){
                diag.push_back(mat[i][j]);
                i++;
                j++;
            }
            sort(diag.begin(), diag.end());
            i=r;
            j=0;
            for(int k=0; k<diag.size(); k++){
                mat[i++][j++] = diag[k];
            }
        }
        for(int c=1; c<n; c++){
            vector<int> diag;
            int i=0, j=c;
            while(i<m && j<n){
                diag.push_back(mat[i][j]);
                i++;
                j++;
            }
            sort(diag.begin(), diag.end());
            i=0; j=c;
            for(int k=0; k<diag.size(); k++){
                mat[i++][j++] = diag[k];
            }
        }
    return mat;
    }
};
