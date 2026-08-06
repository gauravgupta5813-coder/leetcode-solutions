class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int min_time = 0;
    
        for(int i=0; i<n-1; i++){
            int x = points[i+1][0]-points[i][0];
            int y = points[i+1][1]-points[i][1];
            min_time += max(abs(x), abs(y));
        }
        return min_time;
    }
};