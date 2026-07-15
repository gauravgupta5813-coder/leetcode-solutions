class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity){
        int curr = 0;
        int totaldays = 1;

        for(int i=0; i<weights.size(); i++){
            if(curr + weights[i ]> capacity){
                totaldays++;
                curr = 0;
            }
            curr += weights[i];
        }
        return totaldays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = 0;
        int high = 0;

        for(int i=0; i<n; i++){
            high += weights[i];
            low = max(low, weights[i]);
        }
        int ans = high;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(canShip(weights, days, mid)){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};