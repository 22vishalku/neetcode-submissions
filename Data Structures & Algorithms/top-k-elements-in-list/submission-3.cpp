class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<vector<int>> v(nums.size()+1);
        vector<int> l;

          
            for(int i:nums){
      
            m[i]++;

        }
for (auto &it : m) {
      v[it.second].push_back(it.first);
}
for(int i=nums.size();i>=0;i--){

for(int j=0;j<v[i].size();j++){l.push_back(v[i][j]) ;
    if(l.size()== k) return l;
}
}
return {};
    }
};
