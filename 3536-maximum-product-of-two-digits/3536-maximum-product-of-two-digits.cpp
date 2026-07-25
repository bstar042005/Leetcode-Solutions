class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int mul = 0;

        for(int i = 0; i < s.size(); i++)
        {
            for(int j = i + 1; j < s.size(); j++)
            {
                mul = max(mul, (s[i] - '0') * (s[j] - '0'));
            }
        }

        return mul;
    }
};