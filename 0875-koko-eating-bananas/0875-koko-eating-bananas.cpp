class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         int n = piles.size();
   //  sort(piles.begin(),piles.end());   
     int left = 1;
     int right= *max_element(piles.begin(), piles.end());
        while(left<right){
            int mid = left+(right-left)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=piles[i]/mid + ( piles[i] % mid != 0);
            }
            if(sum>h){
            left = mid +1;
            }
            else{
                right = mid;
            }
        }
        return right;
    
    }
};