class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()/2];
 unordered_map<int,int> m;
 int k;
 m[k]=0;
 for(int i:nums ){
       m[i]++;
       if(m[i]>m[k]) {
        k=i;
        m[k]=m[i];
       }
 }
return k;
    }
};