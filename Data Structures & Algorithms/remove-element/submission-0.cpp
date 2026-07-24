class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 0;

        while (i < nums.size() && j < nums.size()) {

            if (nums[i] == val) {

                if (j <= i)
                    j = i + 1;

                while (j < nums.size() && nums[j] == val) {
                    j++;
                }

                if (j < nums.size()) {
                    swap(nums[i], nums[j]);
                } else {
                    break;
                }
            } else {
                i++;
            }
        }

        return i;
    }
};