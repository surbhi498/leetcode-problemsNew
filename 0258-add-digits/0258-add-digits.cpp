class Solution {
public:
    int sum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int addDigits(int num) {
        int jk = num%10;
        if(jk==num) return num;
        int yu = sum(num);
        return addDigits(yu);
    }
};