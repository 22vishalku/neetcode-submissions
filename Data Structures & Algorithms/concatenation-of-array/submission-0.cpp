class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(2*nums.size());
        for(int i=0;i<nums.size();i++){
            v[i]=nums[i];
            v[i+n]=nums[i];
        }
        return v;
    }
};