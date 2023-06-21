class Solution {
public:
    string removeDigit(string number, char digit) {
         int n = number.size();
         vector<int> mark(n,0);
         string bn ="";
         for(int i=0;i<n;i++){
             if(number[i]==digit){
                 mark[i]=1;
             }
         }
        for(int i=0;i<n;i++){
            string mg="";
            if(mark[i]==1){
            if(i==0){
             mg=number.substr(i+1);   
            }    
            else if(i==(n-1)){
                mg=number.substr(0,i);
            }
            else{
                mg=number.substr(0,i)+number.substr(i+1);
                }    
            if(mg>bn){
                    bn=mg;
                }
            }
        }
        return bn;
    }
};