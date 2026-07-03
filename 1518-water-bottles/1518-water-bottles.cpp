class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drank = numBottles;
        int empty = numBottles;

        while(empty >= numExchange){
            drank += empty/numExchange;
            empty = empty%numExchange + empty/numExchange;
        }
        return drank;
    }
};