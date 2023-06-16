class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        stack<char> jk;
        int max1=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            int j=i;
            while(j<n){
            if(s[j]=='('){
                jk.push('(');
                count++;
                max1=max(max1,count);
            }
           else if(s[j]==')'){
                if(!jk.empty()){
                    char ch = jk.top();
                    if(ch=='('){
                        jk.pop();
                        count--;
                    }
                }
            }
           j++;       
          }
          i=--j;  
         
          count=0;
          
        }
        if(max1==INT_MIN) return 0;
       return max1; 
    }
};