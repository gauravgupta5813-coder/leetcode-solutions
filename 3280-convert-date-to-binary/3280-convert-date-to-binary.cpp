class Solution {
public:
    string toBinary(int num){
        string b = "";

        while(num != 0){
            b += to_string(num%2);
            num/=2;
        }
        reverse(b.begin(), b.end());
        return b;
    }
    string convertDateToBinary(string date) {

        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(day);
    }
};