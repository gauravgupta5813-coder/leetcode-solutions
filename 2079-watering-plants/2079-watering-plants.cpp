class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        
        int ans = 0;
        int x = capacity;
    
        for(int i=0; i<n; i++){
            if(plants[i]<=x){
                x -= plants[i];
                ans += 1;
            }
            else {
                x = capacity;
                x -= plants[i];
                ans += (2*i+1);
            }
        }
        return ans;
    }
};