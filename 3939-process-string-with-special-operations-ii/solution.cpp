class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        vector<long long> lengths(n);
        long long curr = 0;
        for(long long i=0; i<n; i++){
            if(s[i]>='a' && s[i]<='z'){
                curr++;
            }
            else if(s[i]=='*'){
                if(curr > 0) curr--;
            }
            else if(s[i]=='#'){
                if(curr > 1e15) curr = 1e15;
                else curr *= 2;
            }
            lengths[i] = curr;
        }
        if (k<0 || k>=curr) return '.';

        for(int i=n-1; i>=0; i--) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                if(k == lengths[i] - 1) return s[i];
            }
            else if (s[i] == '*'){
                continue;
            }
            else if(s[i] == '#'){
                long long prev = lengths[i]/2;
                if(k >= prev){
                    k %= prev;
                }
            }
            else if(s[i] == '%'){
                long long total = lengths[i];
                k = total - 1 - k;
            }
        }
        return '.';
    }
};
