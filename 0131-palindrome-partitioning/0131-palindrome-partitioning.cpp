class Solution {
public:
bool palindrome(string& s) {
    int n = s.size();
    int low=0;
    int high = n-1;
    while(low<high) {
        if(s[low]!=s[high]) {
        return false;
        }
      low++;
      high--;
    }
    return true;
}
    void fun(string s,int n , int start, vector<vector<string>>& jk, vector<string>& nm) {
        if(start>=n) {
            jk.push_back(nm);
            return;
        }
        for(int end=start;end<n;end++) {
            string vb = s.substr(start,end-start+1);
            if(palindrome(vb)) {
                nm.push_back(vb);
                fun(s,n,end+1,jk,nm);
                nm.pop_back();
            } 
            
        }
    }
    vector<vector<string>> partition(string s) {
     int n = s.size();
     vector<vector<string>> jk;
     vector<string> nm;
     fun(s,n,0,jk,nm); 
     return jk;  
    }
};