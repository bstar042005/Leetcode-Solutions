class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int> temp = arr;

        // Sort the copied array
        sort(temp.begin(), temp.end());

        unordered_map<int, int> mp;
        int rank = 1;

        // Assign ranks
        for (int i = 0; i < temp.size(); i++) {
            if (mp.find(temp[i]) == mp.end()) {
                mp[temp[i]] = rank;
                rank++;
            }
        }

        // Replace original values with their ranks
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};