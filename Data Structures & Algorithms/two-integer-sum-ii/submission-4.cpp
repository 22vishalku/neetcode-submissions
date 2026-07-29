class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // unordered_map<int,int> m;
        // for(int i=0;i<numbers.size();i++){
        //     if(m[target-numbers[i]]) return {m[target-numbers[i]],i+1};
        //     m[numbers[i]]=i+1;
        // }
        int i=0;
        int j =numbers.size()-1;
        while(i<j){
            if(numbers[i]+numbers[j]==target) return {i+1,j+1};
            else if(numbers[i]+numbers[j]>=target) j--;
             else i++;
        }
        return {};
    }
};
