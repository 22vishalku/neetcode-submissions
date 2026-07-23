class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     string s="";
     int i=0;
     int n=INT_MAX;
       for(int j=0;j<strs.size();j++){
        if(strs[j].size()<n) n=strs[j].size();

     }  
     while(i<n){
        char c=strs[0][i];
        int g=1;
     for(int j=0;j<strs.size();j++){
        if(strs[j][i]!=c) {g=0;break;}

     } if(g) s=s+c; 
        else break;
      i++; }


     return s;
    }
};