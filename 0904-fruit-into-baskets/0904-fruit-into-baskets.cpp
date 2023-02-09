class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int,int> mp;
        int max1=0;;
        int left=0;
        int j=0;
        for(int i=0;i<n;i++) {
           mp[fruits[i]]++;
           while(mp.size()>2) {
           mp[fruits[left]]--;
           if(mp[fruits[left]]==0) mp.erase(fruits[left]);
           left++;
           } 
           
             max1 = max(max1,i-left+1);   
        }
        return max1;
        
    }
};