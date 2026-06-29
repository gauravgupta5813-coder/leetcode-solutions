class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string curr = "";

        for(int i=0; i<target.size(); i++){
            curr.push_back('a');
            ans.push_back(curr);
            while(curr.back()!=target[i]){
                curr.back()++;
                ans.push_back(curr);
            }
        }
        return ans;
    }
};