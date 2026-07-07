class Solution {
public:
    long long sumAndMultiply(int n) {
        string digits = to_string(n);
        string s = "";
        int sum = 0;

        for (char ch : digits) {
            sum += ch - '0';

            if (ch != '0') {
                s.push_back(ch);
            }
        }

        long long num = 0;

        if (!s.empty()) {
            num = stoll(s);  
        }

        return num * sum;
    }
};