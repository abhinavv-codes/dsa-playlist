class Solution {
public:
    string removeStars(string s) {
        int n= s.length();
        stack<char> st;
        string ans="";
        for(int i=0;i<n;i++){
            if(!st.empty() && s[i]=='*'){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};