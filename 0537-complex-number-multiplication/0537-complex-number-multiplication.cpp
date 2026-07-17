class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int r1, i1, r2, i2;
        char plus, i_char;

        stringstream ss1(num1);
        ss1 >> r1 >> plus >> i1 >> i_char;

        stringstream ss2(num2);
        ss2 >> r2 >> plus >> i2 >> i_char;

        int real = r1*r2 - i1*i2;
        int img = r1*i2 + r2*i1;

        return to_string(real) + "+" + to_string(img) + "i";
    }
};