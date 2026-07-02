class Solution {
public:
    string removeOccurrences(string s, string part) {
        int part_len = part.length();
        string result = "";

        for(char c: s){
            result.push_back(c);

            if(result.length()>= part_len && result.substr(result.length() - part_len) == part){
                result.erase(result.length() - part_len);
            }
        }
        return result;
    }
};