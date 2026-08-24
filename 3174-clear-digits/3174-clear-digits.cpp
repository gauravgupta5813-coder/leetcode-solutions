class Solution {
public:
    string clearDigits(string s) {
        string c;
        
        for(char ch: s){
            if(isdigit(ch)){
                if(!c.empty()){
                    c.pop_back();
                }
            }
            else c.push_back(ch);
        }
        return c;
    }
};