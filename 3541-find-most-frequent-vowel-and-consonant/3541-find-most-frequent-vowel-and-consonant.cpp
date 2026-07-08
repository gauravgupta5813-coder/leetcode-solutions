class Solution {
public:
    int maxFreqSum(string s) {
        int n = s.size();
        int max1 = 0;
        int max2 = 0;

        vector<int> freq(26,0);
        for(char c: s){
            freq[c-'a']++;
        }
        for(int i=0; i<n; i++){
            if(s[i]=='a' || s[i]=='u'|| s[i]=='e'|| s[i]=='o' || s[i]=='i'){
                max1 = max(freq[s[i]-'a'], max1);
            } else max2 = max(freq[s[i]-'a'], max2);
        }
        return max1 + max2;
    }
};