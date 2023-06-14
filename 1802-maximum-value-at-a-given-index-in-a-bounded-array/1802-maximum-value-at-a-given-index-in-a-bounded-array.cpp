class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int low = 1;
        int high = maxSum;
        
        while (low < high) {
            int mid = (low+high+1)/2;
            long long sum = calculateSum(mid, index, n);
            
            if (sum <= maxSum) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        
        return low;
    }
    
    long long calculateSum(int value, int index, int n) {
        long count=0;
        if(value>index){
            //[value-index,.......value-1,value];
            count+=(long)(value+value-index)*(index+1)/2;
        }
        else{
            //[1,2,....value-1,value] plus sequence of ones
            count+=(long)(value+1)*value/2+(index-value+1);
        }
        //on index's right side:
        
        if(value>=(n-index)){
           // there are n-index numbers in arithmetic sequence:
           // [value,value-1,......value-n+1+index]
            count+=(long)(value+value-n+1+index)*(n-index)/2;
        }
        else{
            //[value,value-1,........1]
           count+=(long)(value+1)*value/2+(n-index-value);
        }
        return count-value;
    }
    
   
};
