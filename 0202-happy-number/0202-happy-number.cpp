class Solution {
public:
    bool isHappy(int n) {
       set<int> st;
       st.insert(n);

       while(n!=1){
        int x=n;
        n=0;
        while(x){
          n+=(x%10)*(x%10);
          x=x/10;
        }
        
        if(st.count(n)){
            return false;
        }
        st.insert(n);
       }
       return true;
    }
};