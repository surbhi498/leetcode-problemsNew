class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
     int n = words.size();
     vector<int> ans;   
     map<string, int> mp1;
     for(int i=0;i<n;i++)
     {
      mp1[words[i]]++;   
         
     }    
     if(mp1.find(target) == mp1.end())
     return -1;
     int g = startIndex; 
     if(words[g]==target){
     return 0;    
     }   
     int count=1;   
    while(words[(g+count)%n] != target){
    count++; 
    } 
    ans.push_back(count);    
    int count1=-1;    
       
    while(words[(g+count1+n)%n] != target){
    count1--; 
    }  
    ans.push_back(abs(count1));    
    int min1 = *min_element(ans.begin(),ans.end());
    return min1;    
    }
};