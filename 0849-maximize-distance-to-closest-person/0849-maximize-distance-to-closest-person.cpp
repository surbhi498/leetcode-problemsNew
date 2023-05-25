class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        vector<int> zeros;
        vector<int> ones;
        int max1=INT_MIN;
        for(int i=0;i<n;i++){
            if(seats[i]==0){
                zeros.push_back(i);
            }
            else{
                ones.push_back(i);
            }
        }
        int jk = ones.size();
        for(auto it : zeros){
            int gh = lower_bound(ones.begin(),ones.end(),it)-ones.begin();
            
            if(gh<jk){
              int op;  
              if(gh>0)  
              op = min(abs(ones[gh-1]-it),abs(ones[gh]-it));
              else
              op=abs(ones[gh]-it);    
               max1=max(max1,op); 
            }
            else if(gh==jk){
                int yu = abs(ones[jk-1]-it);
                max1=max(max1,yu);
            }
        }
        return max1;
    }
};