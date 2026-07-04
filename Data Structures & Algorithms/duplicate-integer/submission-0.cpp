class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        for(int i=0;i<nums.size();i++){
         m.insert(nums[i]);
        }
      if(nums.size() == m.size()) return 0;
      else return 1;
    }
};