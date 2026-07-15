class Solution {
public:
    int countDigits(int num) {
        string s = to_string(num);
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            int digit=s[i]-'0';
            if(digit!=0 && num%digit==0)
            {
                count++;
            }
        }
        return count;
    }
};