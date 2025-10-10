class Solution {
public:
    int compress(vector<char>& st) {
        vector<char> res;
        int cou = 1;
        for (int i = 0; i < (int)st.size(); i++) {
            if (i == (int)st.size() - 1 || st[i] != st[i + 1]) {
                res.push_back(st[i]);
                if (cou > 1) {
                    string tr = to_string(cou);
                    for (char ch : tr) {
                        res.push_back(ch);
                    }
                }
                cou = 1;
            } else {
                cou++;
            }
        }
        st = res; 
        return (int)res.size();
    }
};
