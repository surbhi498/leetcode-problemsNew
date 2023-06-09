class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i=0;
        int flag=0; 
        if(n==1) return false;
        if((i+1)<n && arr[i]>arr[i+1]) return false;
        while((i+1<n) && arr[i]<arr[i+1]){
            //flag=1;
            i++;
        }
        if((i+1)<n && arr[i]==arr[i+1]) return false;
        
        while((i+1)<n && arr[i]>arr[i+1]){
            flag=1;
            i++;
        }
        if(flag==0) return false;
        if((i+1)<n && arr[i]<=arr[i+1]) return false;
        
        return true;
    }
};