/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        int gh=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(knows(gh,i)){
                gh=i;
            }
        }
        for(int j=0;j<n;j++){
            if(gh==j) continue;
            if(knows(j,gh) && !knows(gh,j)){
                count++;
            }
        }
        if(count==(n-1)) return gh;
        return -1;
    }
};