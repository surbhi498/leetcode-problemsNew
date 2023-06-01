class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b)
    {
        return a[0]<b[0];
    }    
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        vector<vector<int>> overlap;
        sort(points.begin(), points.end(), compare);
        int ans=1;
        overlap.push_back(points[0]);
        for(int i=1;i<n;i++){
            //overlap occurs
           // overlap[0][0]=points[i][0];
            if((points[i][0]<=overlap[0][1])){
                overlap[0][0] = max(overlap[0][0], points[i][0]); 
                overlap[0][1] = min(overlap[0][1], points[i][1]);
               }
            //overlap does not occur
            else{
                overlap[0][0]=points[i][0];
                overlap[0][1]=points[i][1];
                ans++;
            }
            
        }
        return ans;
    }
};