class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int i=n-1;
        string gh ="";
        while(i>=0){
            if((num[i]-'0')%2 !=0){
                gh = (num.substr(0,i+1));
                break;
            }
            i--;
        }
        return gh;
    }
};