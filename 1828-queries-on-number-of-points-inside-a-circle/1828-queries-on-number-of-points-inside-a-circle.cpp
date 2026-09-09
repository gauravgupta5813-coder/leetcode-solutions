class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int n = points.size();
        int m = queries.size();
        vector<int> result;

        for(int i=0; i<m; i++){
            int x_q = queries[i][0];
            int y_q = queries[i][1];
            int r_q = queries[i][2];
            int sum = 0;
            for(int j=0; j<n; j++){
                int x = points[j][0];
                int y = points[j][1];

                if(pow(x_q - x,2) + pow(y_q - y,2) <= r_q*r_q){
                    sum++;
                } 
            }
            result.push_back(sum);
        }
        return result;
    }
};