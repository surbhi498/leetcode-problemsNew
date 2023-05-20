class Solution {
public:
    
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int count=0;
        while(z>0){
        
        int d = z%2;
        if(d==1)
        count++; 
        z=z/2;    
    }
     return count;   
    }
};