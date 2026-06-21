class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int total = 0;
        for(int i=0; i<costs.size(); i++){
            if(coins >= costs[i]){
                coins -= costs[i];
                total++;
            } else break;
        }
        
        return total;
    }
};
