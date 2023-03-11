class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
     int n = time.size();
     sort(time.begin(),time.end());   
     long long left = 1;
     long long right= (long long)totalTrips*time[n-1];
        while(left<right){
            long long mid = left+(right-left)/2;
            long long sum=0;
            for(int i=0;i<n;i++){
                sum+=mid/time[i];
            }
            if(sum>=totalTrips){
                right=mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};