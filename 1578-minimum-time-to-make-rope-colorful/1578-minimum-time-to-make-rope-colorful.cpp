class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = neededTime.size();
        int sum=0;
        int ans=0;
        int max1=INT_MIN;
        for(int i=0;i<n;i++){
            sum=neededTime[i];
            max1=neededTime[i];
            int j=i+1;
            bool flag=false;
            while((j)<n && colors[i]==colors[j]){
                flag=true;
                sum+=neededTime[j];
              //  cout<<sum<<endl;
                if(max1<neededTime[j]){
                    max1=neededTime[j];
                }
               j=j+1;
             }
           //  cout<<max1<<endl;
             i=j-1;
            if(flag){
            sum-=max1;
            ans+=sum;
            }    
        }
        return ans;
    }
};