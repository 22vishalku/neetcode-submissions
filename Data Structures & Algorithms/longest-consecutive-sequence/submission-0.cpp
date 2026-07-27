class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        int h = 0;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            int g = nums[i];
            int l = 0;

            while (m[g]) {
                l++;
                g++;
            }

            if (h < l)
                h = l;
        }

        return h;
    }
};