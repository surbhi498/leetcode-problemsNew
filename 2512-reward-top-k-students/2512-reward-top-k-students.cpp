#include <bits/stdc++.h>
class Solution {
public:
    static bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
        if(a.first == b.first)
        return a.second < b.second;    
        return (a.first > b.first); 
} 
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        map<string,int> po;
        map<string,int> ne;
        int n = positive_feedback.size();
        int m = negative_feedback.size();
        int count=0;
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++)
        po[positive_feedback[i]]++;
        for(int i=0;i<m;i++)
        ne[negative_feedback[i]]++;
        int x = report.size();
        for(int g=0;g<x;g++){
        count=0;    
        string vb = report[g];
        
          
        
    
        
        for(int i = 0;i<vb.size();i++)
        {
             string sur = "";
            int t =i;
            while(vb[t] != ' ' && t<vb.size()){
            sur+=vb[t];
            t++;    
            }
            i=t;
            cout<<sur<<endl;
            if(po.find(sur) != po.end())
            {  // cout<<count<<endl; 
                count+=3;
                //cout<<count<<endl;
            }  
            if(ne.find(sur) != ne.end())
                
            {
                //cout<<"hi"<<endl;
                count-=1;
                //cout<<count<<endl;
            }
            
            
        } 
        cout<<count<<endl;    
        ans.push_back({count,student_id[g]});    
            
        }
        sort(ans.begin(),ans.end(),sortbysec);
        vector<int> jk;
        for(int i=0;i<k;i++)
        {
         int cv = ans[i].second;
         jk.push_back(cv);   
            
        }    
        
        return jk;
    }
};