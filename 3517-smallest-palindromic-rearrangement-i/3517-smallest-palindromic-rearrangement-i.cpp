class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        string ans = "";
        char mid = '\0';

        for (int i = 0; i < 26; i++) {
            while (freq[i] >= 2) {
                ans += char('a' + i);
                freq[i] -= 2;
            }
            if (freq[i] == 1)
                mid = char('a' + i);
        }

        string right = ans;
        reverse(right.begin(), right.end());

        if (mid != '\0')
            ans += mid;

        ans += right;

        return ans;
    }
};