class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string y_count = "";
        string x_count = "";
        string other_count = "";

        for(char c: s){
            if(c==y){
                y_count += c;
            } else if(c==x){
                x_count += c;
            } else other_count += c;
        }
        return y_count + x_count + other_count;
    }
};