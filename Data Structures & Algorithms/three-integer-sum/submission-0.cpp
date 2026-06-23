class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>> st;

        for(int i = 0; i < nums.size(); i++) {

            unordered_map<int,int> m;

            for(int j = i + 1; j < nums.size(); j++) {

                if(m.find(-(nums[i] + nums[j])) != m.end()) {

                    vector<int> temp = {
                        nums[i],
                        nums[j],
                        -(nums[i] + nums[j])
                    };

                    sort(temp.begin(), temp.end());

                    st.insert(temp);
                }

                m[nums[j]] = j;
            }
        }

        return vector<vector<int>>(st.begin(), st.end());
    }
};