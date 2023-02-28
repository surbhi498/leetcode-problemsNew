class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
    int n = time.size();
    map<int,int> mp;
    vector<int> jk;
    int ans=0;    
    for(int i=0;i<n;i++){
        int bn = time[i]%60;
        jk.push_back(bn);
        
       // else
       // mp[bn]++;    
     //   mp[bn]++;
    }  
        
    for(int i=0;i<n;i++){
       // if(mp[jk[i]] == 0) continue;
        int target = 60-jk[i];
      //  if(jk[i]==0) mp[60]++;
        if(mp.find(target) != mp.end()){
           cout<<"hi"<<endl;
            ans+=mp[target];
     //   if(target==jk[i]) mp[jk[i]]--;
          // mp[jk[i]]--;
       //    mp[target]--;
            
        }
          
              if(jk[i] !=0)
              mp[jk[i]]++;
              else
              mp[60]++;    
          
         // if(mp[target]==0){
         //   mp.erase(target);
         // }
        
    }    
     return ans;   
    }
};