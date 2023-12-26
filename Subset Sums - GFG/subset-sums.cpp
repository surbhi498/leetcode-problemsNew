//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
   void f(int index, vector<int> arr, vector<int>& temp, int sum){
       if(index>=arr.size()){
           temp.push_back(sum);
           return;
       }
       f(index+1, arr, temp, sum+arr[index]);
       f(index+1, arr, temp, sum);
   }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int n = arr.size();
        vector<int> temp;
        f(0, arr, temp, 0);
        sort(temp.begin(), temp.end());
        return temp;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends