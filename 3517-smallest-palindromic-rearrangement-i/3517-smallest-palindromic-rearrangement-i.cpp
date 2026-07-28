class Solution {
public:
    string smallestPalindrome(string s) {
        int n= s.length();
        if(n<=3 ) return s;
        string s1="";
        char mid= s[n/2];
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                s1+=s[i];
            }
        }else{
            for(int i=0;i<n/2;i++){
                s1+=s[i];
            }
        }
        
        sort(s1.begin(),s1.end());
        string s2= s1; 
        reverse(s2.begin(),s2.end());
        
        if(n%2==0){
            return s1+s2;
        }else{
            return s1+mid+s2;
        }
        return s;
    }
};