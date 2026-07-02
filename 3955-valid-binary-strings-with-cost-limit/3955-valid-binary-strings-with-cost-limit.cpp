class Solution {
public:
    void build(int n, string current, int index, int cost, int k, vector<string> &result){
        if(index==n){
            result.push_back(current);
            return;
        }

        current[index] = '0';
        build(n, current, index+1, cost, k, result);

        if ((index == 0 || current[index - 1] != '1') && (cost + index <= k)) {
            current[index] = '1';
            build(n, current, index + 1, cost + index, k, result);
        }
    }
    vector<string> generateValidStrings(int n, int k) {
        vector<string> result;
        string current(n, '0');
        
        build(n,current , 0, 0,k,result);

        return result;
    }
};