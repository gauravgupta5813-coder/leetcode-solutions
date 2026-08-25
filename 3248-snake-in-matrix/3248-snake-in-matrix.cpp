class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0;
        int j=0;
        int x = 0;
        while(i<n && j<n && x<commands.size()){
            if(commands[x]=="RIGHT") {
                j++;
            }
            else if(commands[x]=="LEFT"){
                j--;
            }
            else if(commands[x]=="UP"){
                i--;
            }
            else i++;

            x++;
        }

        return (i)*n + (j);
    }
};