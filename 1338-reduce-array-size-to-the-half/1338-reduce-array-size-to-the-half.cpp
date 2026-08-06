class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> freq;

        for(int num : arr){
            freq[num]++;
        }
        vector<int> counts;
        counts.reserve(freq.size());

        for(auto& [num, count] : freq){
            counts.push_back(count);
        }

        sort(counts.rbegin(), counts.rend());
        int removed = 0;
        int set_size = 0;
        int target = arr.size()/2;

        for(int count: counts){
            removed += count;
            set_size++;
            if(removed >= target){
                break;
            }
        }
        return set_size;
    }
};