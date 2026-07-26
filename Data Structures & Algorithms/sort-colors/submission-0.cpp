class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0,k=0;
        for(int f=0;f<nums.size();f++){
            if(nums[f]==0) i++;
            else if(nums[f]==1) j++;
            else if(nums[f]==2 ) k++;
        }
        for(int f=0;f<i;f++){
           nums[f]=0;
        }
          for(int f=i;f<i+j;f++){
           nums[f]=1;
        }
             for(int f=i+j;f<i+j+k;f++){
           nums[f]=2;
        }
    }
};