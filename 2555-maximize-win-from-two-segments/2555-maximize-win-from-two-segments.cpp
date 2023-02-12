class Solution {
public:
    int maximizeWin(vector<int>& prizePositions, int k) {
     int n = prizePositions.size();
     int count=0;
     int curr_val = 0; 
     vector<int> pref(n);
     vector<int> suffix(n);   
     int end = prizePositions[0]+k;
     int start=0;   
     for(int i=0;i<n;i++) {
         int curr = prizePositions[i];
         if(curr<=end) count++;
         else {
             while(curr>end) {
                 start++;
                 end = prizePositions[start]+k;
                 count--;
             }
             count++;
             
         }
         curr_val = max(curr_val,count);
         pref[i]=curr_val;
         
     }   
     start = n-1;
     count=0;
     end = prizePositions[n-1]-k;
     int max2=0;   
     for(int i=n-1;i>=0;i--) {
         int curr = prizePositions[i];
         if(curr>=end) count++;
         else {
             while(curr<end) {
                 start--;
                 end = prizePositions[start]-k;
                 count--;
             }
             count++;
            
         }
          max2 = max(max2,count);
          suffix[i]=max2;
         
     }   
    // int sum=0;
     int ans=0;   
     for(int i=0;i<n;i++) {
       int  sum = pref[i];
         if((i+1)<n) sum+=suffix[i+1];
         ans = max(ans,sum);
     }   
        
     return ans;   
    }
};