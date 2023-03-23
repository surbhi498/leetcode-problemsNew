class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
     int n = timeSeries.size();
     int count=0;
     if(duration==0) return 0;   
     set<int> s;
     int ans=0;
        
     for(int i=0;i<(n-1);i++){
         int start=timeSeries[i];
         int fg = start+duration;
         int vb = min(fg, timeSeries[i+1]);
         ans+=(vb-start);
         
     }   
     ans+=duration;   
        return ans;
    }
};