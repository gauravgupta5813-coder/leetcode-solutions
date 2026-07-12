class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans = arr;
        sort(ans.begin(), ans.end());
        
        unordered_map<int, int> rank_map;
        int rank = 1;

        for(int num: ans){
            if(rank_map.find(num)==rank_map.end()){
                rank_map[num] = rank;
                rank++;
            }
        }
        for (int i = 0; i < arr.size(); ++i) {
            arr[i] = rank_map[arr[i]];
        }
        return arr;
    }
};