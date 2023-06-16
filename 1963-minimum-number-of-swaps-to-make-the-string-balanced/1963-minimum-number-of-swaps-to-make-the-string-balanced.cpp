class Solution {
public:
    int minSwaps(string s) {
       int n = s.size();
       int count=0; 
       for(auto jk : s){
           if(jk=='[') count++;
           else if(count) count--;
       }
       return (count+1)/2; 
    }
};