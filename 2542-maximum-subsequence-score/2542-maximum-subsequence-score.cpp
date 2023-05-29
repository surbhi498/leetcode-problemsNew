#include <queue>
class Solution {
public:
    static bool compare(const pair<int,int>& a, const pair<int,int>& b){
        return a.second>b.second;
    }
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>> mg;
        long long top_k_sum=0;
        long long answer;
        priority_queue<int,vector<int>,greater<int>> q;
        int n = nums1.size();
        for(int i=0;i<n;i++){
            mg.push_back({nums1[i],nums2[i]});
        }
        sort(mg.begin(),mg.end(),compare);
        for(int i=0;i<k;i++){
            q.push(mg[i].first);
            top_k_sum+=mg[i].first;
        }
        answer=top_k_sum*mg[k-1].second;
        for(int i=k;i<n;i++){
            int gh = q.top();
            q.pop();
            top_k_sum-=gh;
            q.push(mg[i].first);
            top_k_sum+=mg[i].first;
            long long yu = top_k_sum*mg[i].second;
            answer = max(answer,yu);
            
           
        }
        return answer;
    }
};