class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n = tasks.size();
        int min_time = INT_MAX;

        for(int i=0; i<n; i++){
            min_time = min(min_time, tasks[i][0]+tasks[i][1]);
        }
        return min_time;
    }
};