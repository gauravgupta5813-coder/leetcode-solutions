class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        sort(occupiedIntervals.begin(), occupiedIntervals.end());
        int n = occupiedIntervals.size();
        vector<vector<int>> merged;
        if (occupiedIntervals.empty()) return {};

        vector<int> current = occupiedIntervals[0];

        for(int i=1; i<n; i++){
            if(occupiedIntervals[i][0]<=current[1]+1){
                current[1] = max(current[1],occupiedIntervals[i][1]);
            }
            else {
                merged.push_back(current);
                current = occupiedIntervals[i];
            }
        }
        merged.push_back(current);

        vector<vector<int>> ans;
        for(int i=0; i<merged.size(); i++){
            int s = merged[i][0];
            int e = merged[i][1];
            
            if(s<freeStart){
                int left = min(e,freeStart-1);
                ans.push_back({s,left});
            }
            if(e>freeEnd){
                int right = max(s, freeEnd + 1);
                ans.push_back({right, e});
            }
        }
        return ans;
    }
};