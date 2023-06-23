class Solution {
public:
    string convbin(int num){
        string gh="";
        while(num>0){
            int d = num%2;
            gh+=(char)(d+'0');
            num=num/2;
        }
        reverse(gh.begin(),gh.end());
        cout<<gh<<endl;
        return gh;
    }
    int bintoint(string cv){
        int freshnum=0;
        int k=0;
       for(int i=cv.size()-1;i>=0;i--){
           if(cv[i]=='1'){
               freshnum+=pow(2,k)*1;
           }
           k++;
          }
          return freshnum;
    }
    int findComplement(int num) {
        string vb = convbin(num);
        for(int i=0;i<vb.size();i++){
            if(vb[i]=='1'){
                vb[i]='0';
            }
            else{
                vb[i]='1';
            }
        }
       int ans = bintoint(vb);
        return ans;
        
    }
};