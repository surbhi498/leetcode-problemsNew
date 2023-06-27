class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = neededTime.size();
        int sum=0;
        int ans=0;
        int max1=INT_MIN;
        for(int i=0;i<n;i++){
            sum=0;
            max1=INT_MIN;
            int j=i;
            bool flag=false;
            while((j+1)<n && colors[j]==colors[j+1]){
                flag=true;
                sum+=neededTime[j];
              //  cout<<sum<<endl;
                if(max1<neededTime[j]){
                    max1=neededTime[j];
                }
               j=j+1;
             }
           //  cout<<max1<<endl;
            if(flag && (j)<n){
                sum+=neededTime[j];
                if(max1<neededTime[j]){
                    max1=neededTime[j];
                }
            }
             i=j;
            if(flag){
            sum-=max1;
            ans+=sum;
            }    
        }
        return ans;
    }
};