class Solution {
public:
    string removeOccurrences(string s, string part) {
        string st; 

        for(char ch : s) {
            st.push_back(ch);

            if(st.size() >= part.size()) {
                bool match = true;

                for(int i = 0; i < part.size(); i++) {
                    if(st[st.size() - part.size() + i] != part[i]) {
                        match = false;
                        break;
                    }
                }
                if(match) {
                    for(int i = 0; i < part.size(); i++) {
                        st.pop_back();
                    }
                }
            }
        }

        return st;
    }
};