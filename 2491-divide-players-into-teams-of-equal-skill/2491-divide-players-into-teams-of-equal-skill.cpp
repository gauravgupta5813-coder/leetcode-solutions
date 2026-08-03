class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int i=0;
        int j=n-1;
        int x = skill[i] + skill[j];
        long long ans = 0;

        while(i<j){
            if(skill[i] + skill[j] != x){
                return -1;
            }
            ans += (long long)skill[i]*skill[j];
            i++;
            j--;
        }
        return ans;
    }
};