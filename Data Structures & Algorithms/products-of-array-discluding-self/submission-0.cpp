class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
       int t=1;
        for(int i=0;i<nums.size();i++){
          if(i==0) v.push_back(1);
          else{
            t=t*nums[i-1];
            v.push_back(t);
          }
        }
        t=1;
           for(int i=nums.size()-1;i>=0;i--){
          if(i==nums.size()-1) v[i]=v[i]*1;
          else{
            t=t*nums[i+1];
            v[i]=v[i]*t;
          }
        }
return v;
    }
};
