class Solution {
public:
    bool isPossible(vector<int>& nums) {
       int n = nums.size();
       unordered_map<int, int> freq;
       unordered_map<int,int> subseq;
       for(auto gh : nums){
           freq[gh]++;
       } 
      for(auto num : nums){
          if(freq[num]==0) continue;
          if(subseq[num-1]>0){
              subseq[num-1]--;
              subseq[num]++;
          }
          else if(freq[num+1]>0 && freq[num+2]>0){
              subseq[num+2]++;
              freq[num+1]--;
              freq[num+2]--;
          }
          else{
              return false;
          }
          freq[num]--;
          }
        return true;
    }
};