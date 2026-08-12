class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        vector<vector<int>> result;
        for(int i=0; i<n; i++){
            vector<int> ans = image[i];
            reverse(ans.begin(), ans.end());
            for(int j=0; j<n; j++){
                ans[j] ^= 1;
            }
            result.push_back(ans);
        }
        return result;
    }
};