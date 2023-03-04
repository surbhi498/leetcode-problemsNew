class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
      //  map<char,int> mp;
        string gh="";
        int i=0;
        int k=0;
        int vb;
        for(int i=0;i<n;){
            int len=1;
            while(i<n && (i+len)<n && chars[i+len]==chars[i]){
                len++;
            }
            
            gh+=chars[i];
            chars[k++]=chars[i];
            if(len>1){
                gh+=to_string(len);
                for(char c1 : to_string(len)){
                    chars[k++]=c1;
                }
            }
            i=i+len;
               
        }
       
       
        vb=gh.size();
        cout<<vb;
        return vb;
    }
};