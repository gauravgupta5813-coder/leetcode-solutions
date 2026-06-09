class Solution {
public:
    int minCost(int n) {
        if(n<=0) return 0;
        else return n-1 + minCost(n-1);
    }
};
