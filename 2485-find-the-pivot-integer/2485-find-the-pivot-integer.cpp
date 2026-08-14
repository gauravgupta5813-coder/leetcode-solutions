class Solution {
public:
    int pivotInteger(int n) {
        int i=1;
        int j=n;
        int a = 0;
        int b = 0;

        while(i<=j){
            if(a < b){
                a += i;
                i++;
            }
            else if(a > b){
                b += j;
                j--;
            }
            else {
                if(i==j) return i;
                a += i;
                b += j;
                i++;
                j--;
            }
        }
        return -1;
    }
};