class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<vector<int>> v(nums.size() + 1);
        vector<int> l;

        // Count frequency
        for (int i : nums) {
            m[i]++;
        }

        // Place numbers into buckets based on frequency
        for (auto &it : m) {
            v[it.second].push_back(it.first);
        }

        // Traverse buckets from highest frequency to lowest
        for (int i = nums.size(); i >= 0; i--) {
            for (int j = 0; j < v[i].size(); j++) {
                if (l.size() == k)
                    return l;

                l.push_back(v[i][j]);
            }
        }

        return l;
    }
};