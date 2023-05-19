class Solution {
public:
    int countBinarySubstrings(string s) {
     int n = s.size();
     int prev =0;
     int curr=1;
     int answer=0;   
     for(int i=1;i<n;i++){
         if(s[i]==s[i-1]){
             curr++;
         }
         else{
             answer+=min(prev,curr);
             prev=curr;
             curr=1;
            }
           
         } 
       
      answer+=min(prev,curr);
     return answer;   
    }
};