class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        for (int multiple = k; ; multiple += k) {
            
            bool found = false;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == multiple) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return multiple;
            }
        }
    }
};