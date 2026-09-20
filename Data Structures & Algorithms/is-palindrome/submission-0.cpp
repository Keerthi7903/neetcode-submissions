class Solution {
public:
    bool isPalindrome(string s) {
        int count=0;
        string y="";
        for(char x:s){
            if(isalnum(x)){
                y+=tolower(x);
            }
        }
        int l=0; 
        int r=y.size()-1;
        while(l<r){
            if(y[l]!=y[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
