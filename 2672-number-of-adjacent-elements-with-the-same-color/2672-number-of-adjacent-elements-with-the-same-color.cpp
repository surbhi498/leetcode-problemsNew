class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        int m = queries.size();
        vector<int> answer(m,0);
        vector<int> nums(n,0);
        int count=0;
        for(int i=0;i<m;i++){
            vector<int> jk = queries[i];
            int ind = jk[0];
            int color = jk[1];
            if(ind+1<n && nums[ind] != 0 && (nums[ind+1]==nums[ind])){
                count--;
            }
            if(ind-1>=0 && nums[ind] != 0 && (nums[ind-1]==nums[ind])){
                count--;
            }
             nums[ind]=color;
            if(ind+1<n && (nums[ind+1]==color)){
                count++;
            }
            if(ind-1>=0 && (nums[ind-1]==color)){
                count++;
            }
          answer[i]=count;
            
        }
        return answer;
    }
};