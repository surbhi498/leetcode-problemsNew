class Solution {
public:
    int arrangeCoins(int n) {
    long long i=1;    
    while(true){
        long long vb = (i*(i+1))/2;
        if(vb>n) break;
        i=i+1;
    }
     return (i-1);   
    }
};