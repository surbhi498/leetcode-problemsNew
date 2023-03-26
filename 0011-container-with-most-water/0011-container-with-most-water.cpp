class Solution {
public:
    int maxArea(vector<int>& height) {
        int m = height.size();
        int start =0;
        int end = m-1;
        int max1= INT_MIN;
        while(start<end){
            int vb = end-start;
            int gh = min(height[start], height[end]);
            max1= max(max1, gh*vb);
            if(height[start]<=height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return max1;
    }
};