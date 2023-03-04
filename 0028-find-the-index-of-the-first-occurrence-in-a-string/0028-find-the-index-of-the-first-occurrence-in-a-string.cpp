class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int i=0;
        int j=0;
        int flag=0;
        while(i<=(n-m)){
            j=i;
            flag=1;
            for(int k=0;k<needle.size();k++){
            if(haystack[j]==needle[k]){
                j++;
            }
            else{
                flag=0;
                break;
                
            }    
                
            }
            if(flag==1) return i;
            i++;
           
        }
        return -1;
    }
};