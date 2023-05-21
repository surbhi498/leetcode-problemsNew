class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int fg = upper_bound(letters.begin(), letters.end(), target)-letters.begin();
       
        if(fg == letters.size()){
            return letters[0];
        }
        
      return letters[fg];
    }
};