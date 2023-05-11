class FrequencyTracker {
public:
    unordered_map<long long,long long> mp;
    unordered_map<long long,unordered_set<long long>> nm;
    FrequencyTracker() {
     mp.clear();
     nm.clear();   
    }
    
    void add(int number) {
      if(mp[number]>0){  
      nm[mp[number]].erase(number);
      if(nm[mp[number]].empty())
      nm.erase(mp[number]);    
      }    
      mp[number]++;  
      nm[mp[number]].insert(number);  
    }
    
    void deleteOne(int number) {
     if(mp.find(number) != mp.end()) {
     nm[mp[number]].erase(number);  
     if(nm[mp[number]].empty())
     nm.erase(mp[number]);    
     mp[number]--;
     if(mp[number]>0)    
     nm[mp[number]].insert(number);    
      if(mp[number]==0){
          //nm[mp[number]].erase(number);
          mp.erase(number);
      } 
     }    
    }
    
    bool hasFrequency(int frequency) {
       // if(nm[frequency].empty())
       //  return false;
       //  else
       //  return true;  
         return nm.find(frequency) != nm.end();
    }    
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */