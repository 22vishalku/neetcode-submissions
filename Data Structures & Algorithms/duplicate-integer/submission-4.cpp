class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // unordered_set<int> m;
   
        if(nums.size()==0  || nums.size()==1 ) return 0;
     sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
        //  m.insert(nums[i]);
               if(nums[i]==nums[i+1]) return 1;
            
        }
      // if(nums.size() == m.size()) return 0;
      // else return 1;
      return 0;
    }
};