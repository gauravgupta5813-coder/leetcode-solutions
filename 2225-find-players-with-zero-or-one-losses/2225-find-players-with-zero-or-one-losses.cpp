class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
        vector<vector<int>> ans(2);
        int maxPlayer = 0;

        for (auto& match : matches) {
            maxPlayer = max(maxPlayer, max(match[0], match[1]));
        }

        vector<int> win(maxPlayer + 1, 0);
        vector<int> lose(maxPlayer + 1, 0);

        for (auto& match : matches) {
            win[match[0]]++;
            lose[match[1]]++;
        }
        for(int i=1; i<maxPlayer+1; i++){
            if(lose[i]==0 && win[i] > 0){
                ans[0].push_back(i);
            }
            else if(lose[i]==1){
                ans[1].push_back(i);
            }
        }
        return ans;
    }
};