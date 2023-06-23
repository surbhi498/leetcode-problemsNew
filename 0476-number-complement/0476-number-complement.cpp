class Solution {
public:
    int findComplement(int num) {
        int op=num;
        int mask=1;
        while(op != 0){
            // flip the current bit
            num=num^mask;
            //prepare for next iteration
            mask=mask<<1;
            op=op>>1;
        }
        return num;
    }
};