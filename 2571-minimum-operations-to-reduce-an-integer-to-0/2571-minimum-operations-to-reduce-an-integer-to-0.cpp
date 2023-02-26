class Solution {
public:
    int minOperations(int n) {
       int x=1;
       int y=1;
       if(n<=0) return 0;
        if(n==1) return 1;
        while((x*2)<n) x=x*2;
        y=x*2-n;
        x=n-x;
        int low = minOperations(y);
        int high = minOperations(x);
        return min(low,high)+1;
    }
};