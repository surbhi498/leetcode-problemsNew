class Solution {
public:
    int countOdds(int low, int high) {
        if(!(low & 1)) low++;
        if(low>high) return 0;
        else
        return ((high-low)/2)+1;    
    }
};