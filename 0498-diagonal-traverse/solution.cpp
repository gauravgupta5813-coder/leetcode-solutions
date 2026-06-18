class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m = mat.size();
        int n = mat[0].size();

        for(int k=0; k<m+n-1; k++){
            if(k%2 == 0){
                int i = min(k,m-1);
                while(i>=0 && (k-i)<n){
                    ans.push_back(mat[i][k-i]);
                    i--;
                }
            }
            else {
                int i = max(0, k-(n-1));
                while(i<m && (k-i)>=0){
                    ans.push_back(mat[i][k-i]);
                    i++;
                }
            }
        }
        return ans;
    }
};
