class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left=1;
        int right=n-2;
        int maxleft = height[0];
        int maxright= height[n-1];
        int ans=0;
        while(left<=right) {
            if(maxleft<maxright){
            if(height[left]>maxleft) {
            maxleft = height[left];    
            }
            else{
                ans+=maxleft-height[left];
            }
            left++;
        }
            else{
            if(maxright<height[right]) {
                maxright = height[right];
            }
           else{
               ans +=maxright-height[right];
           }
          right--;      
        }
        
        } 
        return ans;
    }
};