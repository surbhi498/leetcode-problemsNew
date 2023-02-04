class Solution {
public:
int numberOfArithmeticSlices(vector<int>& nums) {
    int n = nums.size();
    if(n<=2) return 0;
    vector<int> jk;
    for(int i=0;i<(n-1);i++) {
        jk.push_back((nums[i]-nums[i+1]));
    }
    int count =0;
    int i=0;
    int curr=0;
    
    while(i<(n-1)) {
        curr=0;
        while(i+1<(n-1) && jk[i]==jk[i+1]){
        curr++;
        count+=curr;    
        i++;}
        i++; 

    }
    
return count;
}
};