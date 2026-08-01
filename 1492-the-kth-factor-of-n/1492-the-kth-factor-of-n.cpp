class Solution {
public:
    int kthFactor(int n, int k) {
        for(int i=1; i*i <= n; i++){
            if(n%i == 0){
                k--;
                if(k==0) return i;
            }
        }

        for(int i=sqrt(n); i>=1; i--){
            if(i*i == n) continue;

            if(n%i == 0){
                k--;
                if(k==0) return n/i;
            }
        }
        return -1;
    }
};