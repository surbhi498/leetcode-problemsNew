#include<bits/stdc++.h>
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n= coordinates.size();
      //  sort(coordinates.begin(),coordinates.end());
        int num = coordinates[1][1]-coordinates[0][1];
        int deno = coordinates[1][0]-coordinates[0][0];
        double m;
        int xcoor = coordinates[0][0];
        if(deno==0){
            for(int i=1;i<n;i++){
                if(xcoor != coordinates[i][0])
                return false;
                
            }
            return true;
        }
        if(deno != 0)
         m=(double)num/deno;
        cout<<m<<endl;
        int intercept = coordinates[0][1] - m*coordinates[0][0];
        for(int i=0;i<n;i++){
            int y = m*coordinates[i][0]+intercept;
            int cv = coordinates[i][1];
            cout<<y<<endl;
            if(y != cv){
                return false;
            }
        }
        return true;
    }
};