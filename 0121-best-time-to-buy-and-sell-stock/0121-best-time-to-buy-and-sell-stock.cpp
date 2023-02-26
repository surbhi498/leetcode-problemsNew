class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int low=0;
        int max1=INT_MIN;
        int cost=0;
        for(int i=1;i<(n);i++){
            if(prices[low]<prices[i]){
                cost = abs(prices[i]-prices[low]);
                max1 = max(cost, max1);
            }
            else{
                low=i;
            }
        }
        if(max1==INT_MIN) return 0;
        return max1;
    }
};