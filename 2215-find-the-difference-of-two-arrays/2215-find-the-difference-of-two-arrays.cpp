class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
     map<int,int> mp1;
     map<int,int> mp2;
     vector<vector<int>> kl; 
     vector<int> yu1;
     vector<int> yu2;   
     for(auto gh : nums1){
         mp1[gh]++;
     }   
     for(auto jk : nums2){
         mp2[jk]++;
     }   
        for(auto it1 : mp1){
            int gh=0;
            for(auto it2 : mp2){
                if(it1.first == it2.first){
                   gh=1;
                   break;
                }
            }
             if(gh==0)
            yu1.push_back(it1.first); 
        }
        
        for(auto it2 : mp2){
            int gh=0;
            for(auto it1 : mp1){
                if(it1.first == it2.first){
                  gh=1;
                  break;   
                   
                }
            }
            if(gh==0)
            yu2.push_back(it2.first);    
           
        }
        kl.push_back(yu1);
        kl.push_back(yu2);
        
        return kl;
    }
};