class Solution {
public:
    int maxDistance(string moves) {
        int l=0, r=0, u=0, d=0, w = 0;

        for(int i=0; i<moves.size(); i++){
            if(moves[i]=='L'){
                l++;
            }
            else if(moves[i]=='R'){
                r++;
            }
            else if(moves[i]=='U'){
                u++;
            }
            else if(moves[i]=='D'){
                d++;
            }
            else {
                w++;
            }
        }
        int x = abs(r-l);
        int y = abs(u-d);
        return x  + y + w;
    }
};
