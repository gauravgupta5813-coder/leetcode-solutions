class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        unordered_map<string, int> freq;

        for(const string& word: words){
            freq[word]++;
        }

        vector<vector<string>> bucket(n+1);
        for(auto& [word,count] : freq){
            bucket[count].push_back(word);
        }

        vector<string> result;

        for(int i=n; i>=1 && result.size()<k; i--){
            if(bucket[i].empty()) continue;

            sort(bucket[i].begin(), bucket[i].end());

            for(const string& word: bucket[i]){
                result.push_back(word);
                if(result.size()==k) break;
            }
        }
        return result;
    }
};