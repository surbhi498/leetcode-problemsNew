class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> gh(n,0);
        gh[0]=1;
        vector<int> bn;
        vector<int> suffix(n,0);
        suffix[n-1]=1;
        for(int i=1;i<n;i++){
            int count=0;
            for(int j=i-1;j>=0;j--){
               if(nums[j] == nums[i]) 
               {count=1;
                break;
               } 
            }
            if(count==1)
            gh[i]=gh[i-1];
            else
            gh[i]=gh[i-1]+1;    
        }
        for(int i=n-2;i>=0;i--){
            int count=0;
            for(int j=i+1;j<n;j++){
               if(nums[j] == nums[i]) 
               {count=1;
                break;
               } 
            }
            if(count==1)
            suffix[i]=suffix[i+1];
            else
            suffix[i]=suffix[i+1]+1;    
        }
        for(int i=0;i<n;i++){
            int vb;
            if(i<(n-1))
            vb = gh[i]-(suffix[i+1]);
            else if(i==(n-1))
            vb = gh[i];    
            bn.push_back(vb);
        }
        return bn;
    }
};