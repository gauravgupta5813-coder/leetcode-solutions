class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int max_end = 0;
        int count = n;

        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[0] == b[0]) {
                return a[1] > b[1];
            }
            return a[0] < b[0];
        });

        for(const auto& interval : intervals){
            if(interval[1] <= max_end){
                count--;
            }
            else max_end = interval[1];
        }
        return count;
    }
};