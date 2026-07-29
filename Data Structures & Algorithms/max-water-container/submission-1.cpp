class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int m=0;
while(i<j){
    m=max(m,min(heights[i],heights[j])*(j-i));
    m=max(m,min(heights[i+1],heights[j])*(j-i-1));
   m=max(m,min(heights[i],heights[j-1])*(j-i-1));
    if(heights[i] <heights[j])i++;
    else j--;
}
return m;
    }
};
