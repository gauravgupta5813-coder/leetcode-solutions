class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        for(int i=0; i<score.size()-1; i++){
            int key = score[i][k];
            int x=i;
            
            for(int j = i+1; j<score.size(); j++){
                if(score[j][k]>key){
                    key = score[j][k];
                    x = j;
                }
            }
            swap(score[i], score[x]);
        }
        
        return score;
    }
};
