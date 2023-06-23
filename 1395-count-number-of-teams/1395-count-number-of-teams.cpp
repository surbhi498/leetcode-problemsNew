class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        vector<int> right(n,0);
        vector<int> left(n,0);
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=i+1;j<n;j++){
                if(rating[i]<rating[j]){
                   count++;
                }
                right[i]=count;
            }
        }
         for(int i=n-1;i>=0;i--){
            int count=0;
            for(int j=i-1;j>=0;j--){
                if(rating[i]<rating[j]){
                   count++;
                }
                left[i]=count;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(rating[j]>rating[i]){
                    ans+=right[j];
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if(rating[i]<rating[j]){
                    ans+=left[j];
                }
            }
        }
        return ans;
    }
};