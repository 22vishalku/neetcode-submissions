class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        //bubble sort
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]>nums[j]){
        //             int t=nums[i];
        //             nums[i]=nums[j];
        //             nums[j]=t;
        //         }
        //     }
        // }
 //selectiion sort
 int i=0;
 while(i<n ){
     int t=i;
     for(int j=i+1;j<n;j++){
        if(nums[t]>nums[j]) t=j;
     }
     int g=nums[i];
     nums[i]=nums[t];
     nums[t]=g;
     i++;
 }


 //insertion sort 

        return nums;
    }
};