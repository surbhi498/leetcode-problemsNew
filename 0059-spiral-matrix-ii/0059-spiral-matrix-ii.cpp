class Solution {
public:
    vector<vector<int>> spiralOrder(int n) {
      
        int m = n;
        vector<vector<int>> gh(n,vector<int>(n,0));
        int toprow=0;
        int lastrow=n-1;
        int firstcol=0;
        int lastcol = m-1;
        int k=1;
        while((toprow<=lastrow) && (firstcol<=lastcol)){
           
            for(int i=firstcol;i<=lastcol;i++){
               
                gh[toprow][i]=k++;
            }
           
            toprow++;
            if(toprow>lastrow) break;
            for(int j=toprow;j<=lastrow;j++){
                gh[j][lastcol]=k++; 
                
            }
           
            lastcol--;
            for(int v=lastcol;v>=firstcol;v--){
                
              gh[lastrow][v]=k++;
                
            }
          
            
            if(lastcol<firstcol) break;
           lastrow--;
           for(int j=lastrow;j>=toprow;j--){
              gh[j][firstcol]=k++;
               
           }
          
           firstcol++; 
            
        }
        return gh;
    }
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>> nm = spiralOrder(n);
       vector<vector<int>> op;
//        for(int i=0;i<nm.size();i++){
           
//                cout<<nm[i];
//            }
//            cout<<endl;
//        } 
       for(int i=0;i<nm.size();i++){
           vector<int> vb = nm[i];
           op.push_back(vb);
       } 
        return op;
    }
};