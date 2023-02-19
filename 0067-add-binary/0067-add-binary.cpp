class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();
        if(n<m) swap(n,m);
        cout<<n<<endl;
        cout<<m<<endl;
        int jk =m;
        int carry=0;
        
        while(jk<n) 
        {
         if(a.size()>b.size())   
         b='0'+b;
         else
         a='0'+a;    
         jk++;
        } 
        
        
        cout<<b<<endl;
        string res="";
        for(int j=n-1;j>=0;j--){
            if(a[j]=='1' && b[j]=='1'){
            if(carry) res='1'+res;
            else
            res='0'+res;
            carry=1; 
            cout<<res<<endl;    
            }
            else if(a[j]=='0' && b[j]=='0'){
                if(carry) res='1'+res;
                else
                res='0'+res;
                carry=0;
            }
            else if((a[j]=='1'&& b[j]=='0') || (b[j]=='1' && a[j]=='0')){
                if(carry) {res='0'+res; carry=1;}
                else
                {res='1'+res; carry=0;} 
            }
           }
            if(carry) res='1'+res;
            return res;        
    }
};