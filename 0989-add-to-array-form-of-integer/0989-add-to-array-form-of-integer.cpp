class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
     int n = num.size()-1;
     vector<int> mn;   
     int carry =0;   
     while(n>=0){
         int sum = num[n--]+k%10+carry;
         mn.push_back(sum%10);
         carry = sum/10;
         k=k/10;
     }   
     while(k>0) {
         int vb = k%10+carry;
         k=k/10;
         carry = vb/10;
         mn.push_back(vb%10);
     }    
     if(carry) mn.push_back(carry);   
     reverse(mn.begin(),mn.end()); 
     return mn;   
    }
};